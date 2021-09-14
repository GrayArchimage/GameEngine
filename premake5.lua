workspace "Aurora"
	language "C++"
	architecture "x86_64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

thirdparty = "%{wks.location}/Aurora/thirdparty"

include "Aurora"
include "Sandbox"
include "Aurora/thirdparty/GLFW"