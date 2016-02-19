#pragma once
#include "../Singleton.h"

class SceneBase
{
public:
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual Scene Shift() = 0;
};