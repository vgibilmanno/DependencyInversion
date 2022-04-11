package com.di.di.services;

import org.springframework.stereotype.Component;

import java.util.Random;

@Component
public class SingletonState {
    private int value;

    public SingletonState() {
        Random random = new Random();
        value = random.nextInt(100 - 0) + 0;
    }

    public int GetValue() {
        return value;
    }
}
