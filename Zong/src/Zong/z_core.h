#pragma once

#ifdef ZN_PLATFORM_WINDOWS
	#ifdef ZN_BUILD_DLL
		#define ZONG_API __declspec(dllexport)
	#else
		#define ZONG_API __declspec(dllimport)
	#endif
#else
	#error Zong support only Windows!
#endif

#define BIT_SHIFT(x) (1 << x)
