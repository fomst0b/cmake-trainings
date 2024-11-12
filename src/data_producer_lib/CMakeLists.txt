# INTERFACE libraries are expected to don't have any sources
# They are intended to propagate properites like include directories,
# compile definitions etc.
# *Good approach to use with header only libs.
add_library(data_producer_iface INTERFACE
)

target_include_directories(data_producer_iface
INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc/
    ${CMAKE_CURRENT_SOURCE_DIR}/factory # app library needs to include factory.h, so forward this path through the interface library
)


add_library(data_producer_lib
    data_producer/data_producer.cpp
    factory/factory.cpp
)

target_include_directories(data_producer_lib
# All the target properties (in this case paths) are only
# visible withtin data_producer_lib
PRIVATE
# Only path to the data_producer as other paths ('inc'; 'factory')
# are forwared through the 'data_producer_iface' --> 'data_producer_lib'
# links PUBLICLY to the interface.
    ${CMAKE_CURRENT_SOURCE_DIR}/data_producer
)

target_link_libraries(data_producer_lib
# All the target properties (libraries here) will be forwarded
# to all targets that links to 'data_producer_lib'
# So for example an 'app_lib' links to the 'data_producer_lib',
# so it'll have an access to 'data_producer_iface' properites.
# (path to the '/data_producer_lib/inc')
##
##
# NOTE0: If you will comment 'data_producer_iface' the you'll need to
# add `inc/` and `factory/` directories paths directly to the
# 'target_target_include_directories()' function as well as
# link 'data_producer_iface' directly to the 'app_lib'
##
##
# NOTE1: If you will change the access level to PRIVATE, 
# then 'app_lib' will need to directly link to the 'data_producer_iface'
##
## NOTE2: If you will change the access level to the INTERFACE
# then again 'app_lib' will need to directly link to the
# 'data_producer_interface'
PUBLIC
    data_producer_iface
)
