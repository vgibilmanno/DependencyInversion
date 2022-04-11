package com.di.di.services;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class ComponentAService {
    private Logger logger;
    private SingletonState singletonState;
    private TransientState transientState;

    @Autowired
    public ComponentAService(Logger logger, SingletonState singletonState, TransientState transientState) {
        this.logger = logger;
        this.singletonState = singletonState;
        this.transientState = transientState;
    }

    public void DoIt(){
        logger.LogInformation(String.format("ComponentAService (SingletonState) %s", singletonState.GetValue()));
        logger.LogInformation(String.format("ComponentAService (TransientState) %s", transientState.GetValue()));
    }
}
