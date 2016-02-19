#pragma once
#include "lib/framework.hpp"
#include <memory>

using namespace std;

#define env App::get()

enum Window
{
	WIDTH = 1280,
	HEIGHT = 820
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

enum class Scene
{
	TITLE,
	GAMEMAIN,
	RESULT
};