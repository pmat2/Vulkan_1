#pragma once

#include "lve_window.h"

namespace lve {

class App_one {
	
public:
	static constexpr int WIDTH = 800;
	static constexpr int HEIGHT = 600;

	void run();

private:
	LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };
	std::string test;
};
}