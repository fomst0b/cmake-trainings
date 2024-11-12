#pragma once

#include <cstdint>
#include "shared_data_types/int_32_object.h"

namespace producer {

struct ProducerInterface {
ProducerInterface() = default;
virtual ~ProducerInterface() = default;

virtual sdt::Int32Object deliver () = 0;

};

}