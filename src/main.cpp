#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class BasicApplication {
public:
void run() {
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}

private:
    GLFWwindow* _window;

private:
    void initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // Remove WGL support
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); // Remove resizable windows

        _window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
    }
    
    void initVulkan() {

    }

    void mainLoop() {
        while (!glfwWindowShouldClose(_window)) {
            glfwPollEvents();
        }
    }

    void cleanup() {
        glfwDestroyWindow(_window);

        glfwTerminate();
    }
};

int main() {
    BasicApplication app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}