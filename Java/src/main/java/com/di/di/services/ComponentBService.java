package com.di.di.services;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class ComponentBService {
    private Logger logger;
    private SingletonState singletonState;
    private TransientState transientState;

    @Autowired
    public ComponentBService(Logger logger, SingletonState singletonState, TransientState transientState) {
        this.logger = logger;
        this.singletonState = singletonState;
        this.transientState = transientState;
    }

    public void DoIt(){
        logger.LogInformation(String.format("ComponentBService (SingletonState) %s", singletonState.GetValue()));
        logger.LogInformation(String.format("ComponentBService (TransientState) %s", transientState.GetValue()));
    }
}
