from setuptools import setup, Extension

setup(
    ext_modules = [Extension(name='hello', 
                              sources = ['hello.c'], 
                              )
                  ]
    )

