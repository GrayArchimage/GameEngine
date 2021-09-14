project "Sandbox"
	language "C++"
	cppdialect "c++17"
	kind "ConsoleApp"
	staticruntime "off"

	includedirs
	{
		"%{wks.location}/Aurora/src",
		thirdparty .. "/spdlog/include",
		thirdparty .. "/GLFW/include",
	}

	defines
	{
		"AURORA_PLATFORM_WINDOWS"
	}

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	links
	{
		"Aurora"
	}

	filter "configurations:Debug"
		defines "TO_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "TO_RELEASE"
		runtime "Release"
		optimize "on"