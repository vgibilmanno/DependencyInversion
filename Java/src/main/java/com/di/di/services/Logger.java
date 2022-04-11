package com.di.di.services;
import org.springframework.stereotype.Component;

@Component
public class Logger {
    public void LogInformation(String msg) {
        System.out.println(msg);
    }
}
