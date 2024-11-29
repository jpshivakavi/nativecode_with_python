This VS solution contains 3 projects
1.hello - for creating the hello.dll
2.student - for creating the student.dll
3.testapp - for testing the hello and student dll functionality

You can open this solution using visual studio 2017, 2019 or 2022
Build the DLLs and the testapp

Note down the location where the dlls are generated and use the complete / absolute path to the DLLs as part of the ctypes based python module code to interface DLLs into Python.


Python scripts:
hellp.py 
student.py 

These are the python scripts written to demonstrate the interfacing of respective DLLs and use them from Python scripts.



