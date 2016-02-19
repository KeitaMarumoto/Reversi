#pragma once
#include "../../Singleton.h"
#include "../SceneBase.h"

class Title : public SceneBase
{
private:

public:
	Title();
	void Update() override;
	void Draw() override;
	Scene Shift() override;
};