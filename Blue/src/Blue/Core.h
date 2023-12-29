#pragma once

#ifdef BLUE_PLATFORM_WINDOWS
	#ifdef BLUE_BUILD_DLL
		#define BLUE_API __declspec(dllexport)
	#else	
		#define BLUE_API __declspec(dllimport)
	#endif
#else
	#error Blue only supports windows
#endif