#pragma once
#ifdef _WIN32
#include <Windows.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif

    void sayhello_cpp();
    void echo_cpp(char* str);
    int add_numbers_cpp(int a, int b);
    void greet_cpp(char* str);

#ifdef __cplusplus
}
#endif
