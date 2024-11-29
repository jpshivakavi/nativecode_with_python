#include "hello.h"
#include <stdio.h>

HELLODLL_API void sayhello()
{
	printf("Hello from hello DLL\n");
	return;
}

HELLODLL_API void echo(char* str)
{
	printf("echo from hello DLL : %s\n", str);
	return;
}

HELLODLL_API void greet(char* str)
{
	printf("Good Morning : %s\n", str);
	return;
}

HELLODLL_API int add_numbers(int a, int b)
{
	return a + b;
}



