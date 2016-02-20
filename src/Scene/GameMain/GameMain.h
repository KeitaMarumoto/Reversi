#pragma once
#include "../../Singleton.h"
#include "../SceneBase.h"
#include "../../Board/Board.h"
#include "../../Stone/Stone.h"

class GameMain : public SceneBase
{
private:
	Board board;
	Stone stone;
public:
	GameMain();
	void Update() override;
	void Draw() override;
	Scene Shift() override;
};