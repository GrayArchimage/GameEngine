#include "aurora_pch.h"
#include "WindowsWindow.h"
#include "GLFW/glfw3.h"
#include "Core/Log.h"

namespace Aurora
{

	WindowsWindow::WindowsWindow(const WindowInitProps& props)
	{
        init(props);
	}

	void WindowsWindow::init(const WindowInitProps& props)
	{
        GLFWwindow* window;

        if (!glfwInit())
        {
            AURORA_LOG_FATAL("GLFW init failure!");
            exit(EXIT_FAILURE);
        }
            
        window = glfwCreateWindow(props.windowWidth, props.windowHeight, props.windowTitle.c_str(), NULL, NULL);
        if (!window)
        {
            AURORA_LOG_FATAL("Window create failure!");
            exit(EXIT_FAILURE);
        }

        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);

        while (!glfwWindowShouldClose(window))
        {
            glfwSwapBuffers(window);
            glfwPollEvents();
        }

        glfwDestroyWindow(window);
        glfwTerminate();
	}

}