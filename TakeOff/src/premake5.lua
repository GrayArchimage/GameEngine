workspace "TakeOff"
	configurations { "Debug", "Release" }

project "TakeOff"
	kind "ConsoleApp"
	language "C"
	targetdir "Debug"

	defines
	{
		"helloworld"
	}

	files { "**.h", "**.cpp"}

	filter "configurations:Debug"
		defines { "DEBUG" }
		symbols "On"

	filter "configurations:Release"
		defines { "NDEBUG" }
		optimize "On"

project "Sandbox"
	kind "ConsoleApp"
	language "C"
	targetdir "Debug"

	defines
	{
		"Sandbox"
	}

	filter "configurations:Debug"
		defines { "DEBUG" }
		symbols "On"

	filter "configurations:Release"
		defines { "NDEBUG" }
		optimize "On"