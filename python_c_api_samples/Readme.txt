To build Hello/Greet/HelloCpp module follow these instructions

Windows OS:
-----------

1. Open the visual studio 2022 X64 native command prompt 

2. Set path to the python interpreter using the below command 
   path=c:\python312;c:\python312\scripts;%path%
   
   It is assumed that you have installed python version 3.12.* in C:\python312 folder 
   otherwise you need to replace this part of the path with the path where the Python interpreter has been installed on your system

3. Change your working directory to Hello or Greet 

4. Then issue the below command from the command prompt to build a wheel file
   python -m build --no-isolation   # on windows 

   Ensure that all build tools like wheel, pip, setuptools and build are updated / installed on your system before issuing the above command

5. To install the wheel file, change your working directory to the directory where the wheel file is created
   and run the below command 
   python -m pip install <name of the wheel file>  # on windows system


Linux OS:
---------
1. Change your working directory to Hello or Greet or HelloCpp 

2. Then issue the below command from the command prompt to build a wheel file   
   python3 -m build --no-isolation   # on Linux

   Ensure that all build tools like wheel, pip, setuptools and build are updated / installed on your system before issuing the above command

3. To install the wheel file, change your working directory to the directory where the wheel file is created
   and run the below command 
   python3 -m pip install <name of the wheel file> # in Linux system 
  