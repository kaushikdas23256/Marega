#pragma once

#ifdef MG_PLATFORM_WINDOWS
	#ifdef MG_BUILD_DLL
		#define MAREGA_API __declspec(dllexport)
	#else
		#define MAREGA_API __declspec(dllimport)
	#endif
#else
	#error "Marega only supports windows"
#endif
