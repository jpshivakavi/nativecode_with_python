from setuptools import setup, Extension

setup(ext_modules = 
     [Extension(name = 'greet', sources = ['greetmodule.c'])]
     )

