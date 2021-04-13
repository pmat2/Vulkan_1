#include "app_one.h"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {
	lve::App_one app{};

	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
}