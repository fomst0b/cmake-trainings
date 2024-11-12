#include "data_producer_iface.h"
#include <memory>
namespace producer {

using UniqueProducer = std::unique_ptr<ProducerInterface>;

struct ProducersFactoryInterface {
    ProducersFactoryInterface() = default;
    virtual ~ProducersFactoryInterface() = default;

    virtual UniqueProducer create() = 0;
};
}
