from ctypes import *
import sys
import os
import os.path


if os.name == "posix":
    _major_ver = sys.version_info.major
    _minor_ver = sys.version_info.minor
    _dll_path = os.path.join(os.path.dirname(__file__), "libhello.so")
    #_dll_path = os.path.join("/usr/local/lib/python" + str(_major_ver) + "." + str(_minor_ver),
    #                        "site-packages", "hello", "libhello.so")
    _dll_loader = cdll
else:
    _dll_path = os.path.join(os.path.dirname(sys.executable), 'LIB', 'site-packages', 'hello', 'hello.dll')
    _dll_loader = windll

_handle = _dll_loader.LoadLibrary(_dll_path)


def sayhello():
    _handle.sayhello()


def echo(echo_str):
    data = bytes(echo_str,"utf-8")
    _handle.echo(data)


def greet(greet_str):
    data = bytes(greet_str, "utf-8")
    _handle.greet(data)


def add_numbers(x, y):
    sum = _handle.add_numbers(x,y)
    print(f"Sum of {x} and {y} = {sum}".format(x,y,sum))


if __name__ == "__main__":
    print("Executing the APIs from the extension module")
    sayhello()
    echo("Test string from python script")
    greet("Jayaprakash")
    add_numbers(10,20)

