#pragma once

#ifdef HY_PLATFORM_WINDOWS

	#ifdef HY_BUILD_DLL
		#define HYENGINE_API __declspec(dllexport)
	#else
		#define HYENGINE_API __declspec(dllimport)
	#endif

#else
	#error HyEngine only supports Windows for the moment!
#endif
