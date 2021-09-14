/*runtime application*/
#pragma once

#include "Window.h"
#include "GLFW/glfw3.h"

namespace Aurora
{

	class Application
	{
	public:
		Application();
		virtual ~Application() = default;

	private:
		//std::unique_ptr<Window> 
		Window* m_window;

		//virtual void Run();
		//virtual void End();
	};

	Application* CreateApplication();

}
