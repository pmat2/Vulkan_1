# Vulkan_1
First Vulkan project

## Required libraries:
- GLFW (https://www.glfw.org/download.html) 64bin
- GLM (https://github.com/g-truc/glm/releases)
- Vulkan SDK (https://vulkan.lunarg.com/)

## Additional libraries included
- C/C++ > general
  - Include dictionatires for:
    - VulkanSDK\<version>\Include
    - glm
    - glfwbin\Include

- Linker > general
  - Additional Library Dictionaries:
    - VulkanSDK\<version>\lib
    - glfwbin\lib-vc2019
- Linker > input
  - Additional Dependencies:
    - vulkan-1.lib
    - glfw3.lib

- Set language to C17
- Compile in 64bit
