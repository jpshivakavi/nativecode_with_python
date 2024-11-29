#include <iostream>
#include "hello_cpp.h"

using namespace std;

void sayhello_cpp()
{
    cout << "Hello from hellocpp DLL" << endl;
    return;
}

void echo_cpp(char* str)
{
    cout << "echo from hellocpp DLL : " << str << endl;
    return;
}

void greet_cpp(char* str)
{
    cout << "Good Morning : " << str << " from CPP dll\n" << endl;
    return;
}

int add_numbers_cpp(int a, int b)
{
    return a + b;
}

