#ifdef WIN32DLL_EXPORTS
#define WIN32DLL_API extern "C" __declspec(dllexport)
#else
#define WIN32DLL_API extern "C" __declspec(dllimport)
#endif


WIN32DLL_API int factorial(int);
