#include <iostream>
#include <string>
#include <format>
#include "factory.h"
#include "data_producer_iface.h"


namespace tooling {
std::string to_string(const producer::sdt::Int32Object& obj) {
    return std::format("Int32Object{{\n  .id = {}\n  .value = {}\n}}\n", obj.id, obj.value);
}
}

int main() {
  producer::Factory factory {};
  producer::UniqueProducer producer {factory.create()};
  auto i32_obj {producer->deliver()};
  std::cout << tooling::to_string(i32_obj);
  return 0;
}