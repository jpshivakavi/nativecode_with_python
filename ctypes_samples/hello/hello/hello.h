#pragma once
#ifdef _WIN32
#ifdef HELLODLL_EXPORTS 
#define HELLODLL_API __declspec(dllexport)
#else 
#define HELLODLL_API __declspec(dllimport)
#endif 

#include <Windows.h>
#else   // _WIN32
#define HELLODLL_API 
#endif 

HELLODLL_API void sayhello();

HELLODLL_API void echo(char* str);
HELLODLL_API int add_numbers(int a, int b);
HELLODLL_API void greet(char* str);



