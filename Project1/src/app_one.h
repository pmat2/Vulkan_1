#pragma once

#include "lve_window.h"
#include "lve_pipeline.h"

namespace lve {

	class App_one {

	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };
		LvePipeline lvePipeline{ "src/shaders/simple_shader.vert.spv", "src/shaders/simple_shader.frag.spv" };
	};
}