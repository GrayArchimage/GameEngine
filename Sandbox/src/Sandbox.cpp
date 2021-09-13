#include <Aurora.h>
#include <iostream>

class Sandbox : public Aurora::Application
{
public:
	Sandbox()
	{
		DEBUG_LOG_INFO("HELLO AURORA");
		AURORA_LOG_INFO("HELLO USER");
	}

	~Sandbox()
	{

	}
};

Aurora::Application* Aurora::CreateApplication()
{
	return new Sandbox();
}

