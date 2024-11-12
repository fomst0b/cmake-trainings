add_executable(cmk_exe
    main.cpp
)

target_link_libraries(cmk_exe
# Link privately as executable won't be linked to
# anything else
PRIVATE
# data_producer_iface
data_producer_lib
)