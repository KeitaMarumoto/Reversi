#pragma once
#include "lib/framework.hpp"

#define env App::get()

enum Window
{
	WIDTH = 1280,
	HEIGHT = 720
};

class App
{
public:
	static AppEnv& get() 
	{
		static AppEnv s_env(Window::WIDTH,
							Window::HEIGHT, 
							false, 
							true);
		return s_env;
	}
};