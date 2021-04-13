#include "app_one.h"

namespace lve {

	void App_one::run() {
		while (!lveWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}