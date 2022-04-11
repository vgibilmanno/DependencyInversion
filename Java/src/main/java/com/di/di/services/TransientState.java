package com.di.di.services;

import org.springframework.beans.factory.config.ConfigurableBeanFactory;
import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

import java.util.Random;

@Component
@Scope(ConfigurableBeanFactory.SCOPE_PROTOTYPE)
public class TransientState {
    private int value;

    public TransientState() {
        Random random = new Random();
        value = random.nextInt(100 - 0) + 0;
    }

    public int GetValue() {
        return value;
    }
}
