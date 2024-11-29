#pragma once

#ifdef _WIN32

#ifdef HELLOCPPDLL_EXPORTS 
#define HELLOCPPDLL_API __declspec(dllexport)
#else 
#define HELLOCPPDLL_API __declspec(dllimport)
#endif 
#include <Windows.h>

#else   // _WIN32
#define HELLOCPPDLL_API 
#endif 


#ifdef __cplusplus
extern "C"
{
#endif

	HELLOCPPDLL_API void sayhello_cpp();
	HELLOCPPDLL_API void echo_cpp(char* str);
	HELLOCPPDLL_API int add_numbers_cpp(int a, int b);
	HELLOCPPDLL_API void greet_cpp(char* str);

#ifdef __cplusplus
}
#endif
