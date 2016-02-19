#pragma once
#include "../../Singleton.h"
#include "../SceneBase.h"

class GameMain : public SceneBase
{
private:

public:
	GameMain();
	void Update() override;
	void Draw() override;
	Scene Shift() override;
};