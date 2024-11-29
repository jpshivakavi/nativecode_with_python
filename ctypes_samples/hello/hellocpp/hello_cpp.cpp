#include <iostream>
#include "hello_cpp.h"

using namespace std;

HELLOCPPDLL_API void sayhello_cpp()
{
	cout << "Hello from hellocpp DLL" << endl;
	return;
}

HELLOCPPDLL_API void echo_cpp(char* str)
{
	cout << "echo from hellocpp DLL : " << str << endl;
	return;
}

HELLOCPPDLL_API void greet_cpp(char* str)
{
	cout << "Good Morning : " << str << " from CPP dll\n" << endl;
	return;
}

HELLOCPPDLL_API int add_numbers_cpp(int a, int b)
{
	return a + b;
}

