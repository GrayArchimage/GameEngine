#include "aurora_pch.h"
#include "Application.h"
#include "GLFW/glfw3.h"
#include "Platform/Windows/WindowsWindow.h"

namespace Aurora
{

	Application::Application()
	{
		WindowInitProps windowInitProps;
		m_window = new WindowsWindow(windowInitProps);
	}

}