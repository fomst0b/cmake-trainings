#include <cstdint>
#include "data_producer.h"

namespace producer {

sdt::Int32Object DataProducer::deliver() {
    return sdt::Int32Object {.value = 0, .id = 0};
}
}