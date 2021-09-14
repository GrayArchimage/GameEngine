#pragma once
#include "aurora_pch.h"
#include "Log.h"

namespace Aurora
{
	
	struct WindowInitProps
	{
		std::string windowTitle;
		uint32_t windowWidth;
		uint32_t windowHeight;
		WindowInitProps(const std::string windowTitle = std::string("Aurora"),
			const uint32_t windowWidth = 800, const uint32_t windowHeight = 600)
			: windowTitle(windowTitle), windowWidth(windowWidth), windowHeight(windowHeight)
		{
		}
	};

	class Window
	{
	public:
		virtual ~Window() = default;
	};

}

