from setuptools import setup, Extension
import os

_current_dir = os.getcwd()
_current_dir_split = _current_dir.split('\\')
_include_dir = ["/".join(_current_dir_split)]

print("path = ", _include_dir)

setup(
    ext_modules = [
        Extension(name='hello_cpp', sources = ['hello_cpp.cpp','hello.c'],
                                    depends = ['hello_cpp.h'],
                   #include_dirs=[_include_paths])]
                  include_dirs=_include_dir)]

    )