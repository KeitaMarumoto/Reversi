#pragma once
#include "../../Singleton.h"
#include "../SceneBase.h"
#include "../../Board/Board.h"

class GameMain : public SceneBase
{
private:
	Board board;
public:
	GameMain();
	void Update() override;
	void Draw() override;
	Scene Shift() override;
};