from setuptools import setup
import os

if os.name == "nt":
    dll_name = "student.dll"
else:
    dll_name = "libstudent.so"

setup(
    name="student",   
    version = '0.42.0',
    data_files = [ 
                  ('site-packages/student', ['src/student/student.py']),
                  ('site-packages/student', ['src/student/__init__.py']),
                  ('site-packages/student', ['src/student/' + dll_name]),
                  ('site-packages/student', ['LICENSE']),
                  ('site-packages/student', ['README.md'])]
    )

