package com.essentia.osm;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.ComponentScan;

@SpringBootApplication
@ComponentScan( basePackages= {"com.essentia.osm.controller"})
public class Lanelet2MapServerApplication {

	public static void main(String[] args) {
		SpringApplication.run(Lanelet2MapServerApplication.class, args);
	}

}
