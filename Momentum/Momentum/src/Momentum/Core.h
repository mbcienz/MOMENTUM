#pragma once

//macro per fare import ed export

#ifdef MM_PLATFORM_WINDOWS
	#ifdef MOMENTUM_BUILD_DLL
		#define MOMENTUM_API __declspec(dllexport)
	#else
		#define MOMENTUM_API __declspec(dllimport)
	#endif
#else
	#error Momentum only supports Windows for now!
#endif