workspace "Volta"
architecture "x64"
startproject "Volta Sandbox"
configurations
{
	"Debug",
	"Release",
	"Ship"
}
	
	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Volta Core"

location "Volta Core"

	kind "SharedLib"

	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")

	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

		files
		{
			"%{prj.name}/Source/**.h",
			"%{prj.name}/Source/**.cpp"
		}

		includedirs
		{
			"Volta Core/vendor/spdlog/include"
		}

filter "system:windows"
	
	cppdialect "C++20"

	staticruntime "On"

	systemversion "latest"

	defines
	{
		"VL_PLATFORM_WINDOWS",
		"VOLTA_EXPORT"
	}
    

filter "configurations:Debug"
			defines "VL_DEBUG"
			symbols "On"

filter "configurations:Release"
			defines "VL_RELEASE"
			optimize "On"

filter "configurations:Ship"
			defines "VL_SHIP"
			optimize "On"

project "Volta Sandbox"

location "Volta Sandbox"

	kind "ConsoleApp"

	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")

	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

 
    
      

	files
	{
		"%{prj.name}/Source/**.h",
		"%{prj.name}/Source/**.cpp"
	}

	includedirs
	{
		"Volta Core/vendor/spdlog/include",
		"Volta Core/Source/Core"
	}

	links
	{
		"Volta Core"
	}

filter "system:windows"
	cppdialect "C++20"
	staticruntime "On"
	systemversion "latest"

	defines
	{
		"VL_PLATFORM_WINDOWS"
	}

filter "configurations:Debug"
			defines "VL_DEBUG"
			symbols "On"

filter "configurations:Release"
			defines "VL_RELEASE"
			optimize "On"

filter "configurations:Ship"
			defines "VL_SHIP"
			optimize "On"
