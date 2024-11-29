# native-code-with-python-samples
This repo contains the samples to demonstrate the methods to interface native code with Python.

Please go through the PDF document in the docs folder to know more about how to interface/ integrate 
native code (C/C++) with Python.


# Pre-requisites to be installed for Windows OS:
<br />

1. Install VS2022 for developing C/C++ applications
    <br />You can download a community version by following this [link](https://visualstudio.microsoft.com/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&passive=false&cid=2030)
    <br />Ensure that you choose the workload "Desktop developmen with C++" while installing Visual Studio 2022.
    <br />

2. Install the latest version of Python interpreter 3.12.x using the [link](https://www.python.org/ftp/python/3.12.1/python-3.12.1-amd64.exe)
    <br />Customize the installation path while installing and set the path to C:\Python312.
    <br />You may also choose the option to update path variable so that this interpreter will become your default interpreter.
    <br />

3. Open windows command prompt and set the path variable using the below command.
   <br />set path=C:\Python312;C:\Python312\Scripts;%path%
   <br />This step is needed only if you have not choosen the option to update path variable at the time of installation.
   <br />

4. Install the build package required for building the python wheel packages using the command below.
   <br />python –m pip install build
   <br />

5. Install the wheel package required for building the python wheel packages using the command below.
   <br />python –m pip install wheel
   <br />

6. Install the setuptools package required for building the python modules using the command below.
   <br />python –m pip install setuptools
   <br />


# Pre-requisites to be installed for Linux OS:
<br />

1. You need GCC tool chain which comes as the default tool chain in most of the Linux based OSes.
   <br />

2. Use the instructions in this [link](https://phoenixnap.com/kb/how-to-install-python-3-ubuntu) to install Python3.12.1 .
   <br />

3. Install the build package required for building the python wheel packages using the command below.
   <br />python3 –m pip install build
   <br />

4. Install the wheel package required for building the python wheel packages using the command below.
   <br />python3 –m pip install wheel
   <br />

5. Install the setuptools package required for building the python modules using the command below.
   <br />python3 –m pip install setuptools
   <br />


# Building and Using the Samples:
# ctypes_samples
<br />To build and install the samples in ctypes_samples go through the instructions provided in [ctypes_sampes\Readme.txt](https://github.com/jpshivakavi/nativecode_with_python/blob/main/ctypes_samples/Readme.txt)
<br />

# python_c_api_samples
<br />To build and install the samples in python_c_api_samples go through the instructions provided in [python_c_api_samples\Readme.txt](https://github.com/jpshivakavi/nativecode_with_python/blob/main/python_c_api_samples/Readme.txt)
<br />
