This hello folder contains a Visual Studio solution for Windows OS and 
build.sh script for Linux to build the dynamic libraries / shared objects
required for respective OSes for interfacing native code with Python:

1.hello - for creating the hello.dll/libhello.so
2.hellocpp - for creating the hellocpp.dll/libhellocpp.so - This dll exposes C APIs to the CPP APIs
3.student - for creating the student.dll/libstudent.so
4.testapp - for testing the hello, hellocpp and student dll/shared objects functionality

You can open the VS solution on Windows OS using visual studio 2019 or 2022
Change the solution platform to "x64" from the current value "Any CPU"
Build the solution to generate DLLs and the testapp

Use the build.sh script to build the .so files and the testapp on linux
(tested on ubunut linux with python 3.12.1 version)


To create wheel package of python modules with DLLs, shared objects and to install these wheel packages
You may follow the below steps:

1. Change your working directory to packages\hello and run the below command to build hello wheel package
   python3 -m build --no-isolation  # on Linux OS
   
   python -m build --no-isolation  # on Windows OS

   you can do the same thing for other packages such as hellocpp and student as well.
   The wheel package gets generated under dist folder in the current working directory.

2. To install the wheel package change your workind directory to the dist directory and run the below command
   python3 -m pip install hello-0.42-py3-none-any.whl # on Linux OS you need to use python3 for invoking the python 3.x interpreter
   
   python -m pip install hello-0.42-py3-none-any.whl  # on Windows OS

   The Python module will be installed as per the OS specific module installation paths
   You may follow the similar steps for installing other wheel packages as well..
