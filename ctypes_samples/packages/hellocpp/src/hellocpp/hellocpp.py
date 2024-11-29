from ctypes import *
import sys
import os
import os.path

if os.name == "posix":
    _major_ver = sys.version_info.major
    _minor_ver = sys.version_info.minor
    _dll_path = os.path.join(os.path.dirname(__file__), "libhellocpp.so")
    #_dll_path = os.path.join("/usr/local/lib/python" + str(_major_ver) + "." + str(_minor_ver),
    #                        "site-packages", "hellocpp", "libhellocpp.so")
    _dll_loader = cdll
else:
    _dll_path=os.path.join(os.path.dirname(sys.executable), 'LIB', 'site-packages', 'hellocpp', 'hellocpp.dll')
    _dll_loader = windll

_handle = _dll_loader.LoadLibrary(_dll_path)


def sayhello_cpp():
    _handle.sayhello_cpp()


def echo_cpp():
    _handle.echo_cpp(b'Interfacing Native code with Python')

if __name__ == "__main__":
    print("Executing the CPP extension module APIs")
    sayhello_cpp()
    echo_cpp()

