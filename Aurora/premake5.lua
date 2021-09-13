project "Aurora"
	language "C++"
	cppdialect "c++17"
	architecture "x86_64"
	kind "StaticLib"
	staticruntime "off"

	pchheader "aurora_pch.h"
	pchsource "src/aurora_pch.cpp"

	files
	{
		"src/**.h",
		"src/**.cpp",
	}

	includedirs
	{
		"src",
		"thirdparty/spdlog/include",
	}

	filter "configurations:Debug"
		defines "AURORA_GENERATE_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "AURORA_GENERATE_RELEASE"
		runtime "Release"
		optimize "on"