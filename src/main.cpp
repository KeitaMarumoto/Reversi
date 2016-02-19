#include "Singleton.h"
#include "Scene/SceneManager/SceneManager.h"
int main() {
	env;

	SceneManager scene_manager;

	while (env.isOpen()) {
		scene_manager.Update();

		env.begin();
		env.bgColor(Color(0.3f, 0.3f, 0.3f));
		scene_manager.Draw();
		env.end();

		scene_manager.Shift();
	}
}
