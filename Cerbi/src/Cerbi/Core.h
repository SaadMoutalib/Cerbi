#pragma once

#ifdef CB_PLATFORM_WINDOWS
	#ifdef CB_BUILD_DLL
		#define CERBI_API __declspec(dllexport)
	#else
		#define CERBI_API __declspec(dllimport)
	#endif
#else
	#error CEBi ONLY SUPPORT WINDOWS
#endif