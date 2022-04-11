#ifndef COMPONENTBSERVICE
#define COMPONENTBSERVICE

#include "..\di.hpp"
#include "Logger.cpp"
#include "SingletonState.cpp"
#include "TransientState.cpp"

class ComponentBService {
    Logger* _logger;
    SingletonState* _singletonState;
    TransientState _transientState;

    public:
        BOOST_DI_INJECT(ComponentBService, 
            std::shared_ptr<Logger> logger, 
            std::shared_ptr<SingletonState> singletonState, 
            TransientState transientState) {
            _logger = logger.get();
            _singletonState = singletonState.get();
            _transientState = transientState;
        }

        void DoIt() {
            _logger->LogInfo("ComponentBService (SingletonState) " + std::to_string(_singletonState->GetValue()));
            _logger->LogInfo("ComponentBService (TransientState) " + std::to_string(_transientState.GetValue()));
        }
};

#endif