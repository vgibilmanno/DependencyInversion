package com.di.di;

import com.di.di.services.ComponentAService;
import com.di.di.services.ComponentBService;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;

@SpringBootApplication
public class DiApplication {
	public static void main(String[] args) {
		ConfigurableApplicationContext context = SpringApplication.run(DiApplication.class, args);

		ComponentAService componentAService = context.getBean(ComponentAService.class);
		componentAService.DoIt();

		ComponentBService componentBService = context.getBean(ComponentBService.class);
		componentBService.DoIt();
	}
}
