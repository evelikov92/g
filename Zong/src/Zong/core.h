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

#ifdef ZN_ENABLE_ASSERT
	#define ZONG_ASSERT(x, ...) { if(!(x)) { ZONG_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define ZONG_CORE_ASSERT(x, ...) { if(!(x)) { ZONG_CORE_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define ZONG_ASSERT(x, ...)
	#define ZONG_CORE_ASSERT(x, ...)
#endif

#define BIT_SHIFT(x) (1 << x)
