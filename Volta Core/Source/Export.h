#pragma once

#ifdef VOLTA_EXPORT
	#define VOLTA_API __declspec(dllexport)
#else 
	#define VOLTA_API __declspec(dllimport)
#endif