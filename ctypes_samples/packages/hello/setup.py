from setuptools import setup
import os

if os.name == "nt":
    dll_name = "hello.dll"
else:
    dll_name = "libhello.so"

setup(
    name="hello",   
    version = '0.42.0',
    data_files = [ 
                  ('site-packages/hello', ['src/hello/hello.py']),
                  ('site-packages/hello', ['src/hello/__init__.py']),
                  ('site-packages/hello', ['src/hello/' + dll_name]),
                  ('site-packages/hello', ['LICENSE']),
                  ('site-packages/hello', ['README.md'])]
    )

