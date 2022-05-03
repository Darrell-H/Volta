#pragma once

#ifdef VL_PLATFORM_WINDOWS
	#ifdef VOLTA_EXPORT
		#define VOLTA_API __declspec(dllexport)
	#else 
		#define VOLTA_API __declspec(dllimport)
	#endif
#endif