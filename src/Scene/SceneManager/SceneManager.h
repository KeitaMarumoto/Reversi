#pragma once
#include "../../Singleton.h"
#include "../Title/Title.h"
#include "../GameMain/GameMain.h"
#include "../Result/Result.h"
#include "../SceneBase.h"

class SceneManager
{
private:
	shared_ptr<SceneBase> scene;
	Scene scene_num;
public:
	SceneManager();
	void Update();
	void Draw();
	void Shift();
};