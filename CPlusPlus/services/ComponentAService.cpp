#ifndef COMPONENTASERVICE
#define COMPONENTASERVICE

#include "..\di.hpp"
#include "Logger.cpp"
#include "SingletonState.cpp"
#include "TransientState.cpp"

class ComponentAService {
    Logger* _logger;
    SingletonState* _singletonState;
    TransientState _transientState;

    public:
        BOOST_DI_INJECT(ComponentAService, 
            std::shared_ptr<Logger> logger, 
            std::shared_ptr<SingletonState> singletonState, 
            TransientState transientState) {
            _logger = logger.get();
            _singletonState = singletonState.get();
            _transientState = transientState;
        }

        void DoIt() {
            _logger->LogInfo("ComponentAService (SingletonState) " + std::to_string(_singletonState->GetValue()));
            _logger->LogInfo("ComponentAService (TransientState) " + std::to_string(_transientState.GetValue()));
        }
};

#endif