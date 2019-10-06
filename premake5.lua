workspace "Zong"
	architecture "x64"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
	
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
	
project "Zong"
	location "Zong"
	kind "SharedLib"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	pchheader "z_pch.h"
	pchsource "Zong/src/z_pch.cpp"
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"%{prj.name}/vendor/spdlog/include",
		"%{prj.name}/vendor/behavior-tree/include",
		"%{prj.name}/src"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			"ZN_PLATFORM_WINDOWS",
			"ZN_BUILD_DLL"
		}
	
		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Game")
		}
		
	filter "configurations:Debug"
		defines "ZN_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "ZN_RELEASE"
		optimize "On"
		
		filter "configurations:Dist"
		defines "ZN_DIST"
		optimize "On"

		
		
project "Game"
	location "Game"
	kind "ConsoleApp"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	pchheader "pch.h"
	pchsource "Game/src/pch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"Zong/src/",
		"Zong/vendor/spdlog/include",
	}
	
	links
	{
		"Zong"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			"ZN_PLATFORM_WINDOWS"
		}
		
	filter "configurations:Debug"
		defines "ZN_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "ZN_RELEASE"
		optimize "On"
		
		filter "configurations:Dist"
		defines "ZN_DIST"
		optimize "On"
		
