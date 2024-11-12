#pragma once

#include "producer_factory_iface.h"

namespace producer {

struct Factory final : public ProducersFactoryInterface {
    ~Factory() = default;

    UniqueProducer create() final;
}; 
}