#pragma once
#include "../../Singleton.h"
#include "../SceneBase.h"

class Result : public SceneBase
{
private:

public:
	Result();
	void Update() override;
	void Draw() override;
	Scene Shift() override;
};
