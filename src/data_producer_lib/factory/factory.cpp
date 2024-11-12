#include "factory.h"
#include "data_producer.h"


namespace producer {

UniqueProducer Factory::create() {
    return std::make_unique<DataProducer>();
}
}