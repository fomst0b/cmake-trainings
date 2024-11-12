#pragma once

#include "data_producer_iface.h"

namespace producer {

struct DataProducer final : public ProducerInterface {

~DataProducer() final = default;

sdt::Int32Object deliver() final;

};
}