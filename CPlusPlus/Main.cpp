#include <iostream>
#include <string>
#include "di.hpp"
#include ".\services\Logger.cpp"
#include ".\services\SingletonState.cpp"
#include ".\services\TransientState.cpp"
#include ".\services\ComponentAService.cpp"
#include ".\services\ComponentBService.cpp"

namespace di = boost::di;

int main() {
    const auto injector = di::make_injector();

    auto componentAService = injector.create<ComponentAService>();
    componentAService.DoIt();

    auto componentBService = injector.create<ComponentBService>();
    componentBService.DoIt();
    return 0;
}