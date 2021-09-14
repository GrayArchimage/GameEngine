#pragma once

#include "Core/Window.h"
namespace Aurora
{

	class WindowsWindow : public Aurora::Window
	{
	public:
		WindowsWindow(const WindowInitProps& props);
		virtual ~WindowsWindow() = default;
	private:
		void init(const WindowInitProps& props);
	};

}

