from setuptools import setup
import os

if os.name == 'nt':
    dll_name = 'hellocpp.dll'
else:
    dll_name = 'libhellocpp.so'

setup(
    name="hellocpp",   
    version = '0.42.0',
    data_files = [ 
                  ('site-packages/hellocpp', ['src/hellocpp/hellocpp.py']),
                  ('site-packages/hellocpp', ['src/hellocpp/__init__.py']),
                  ('site-packages/hellocpp', ['src/hellocpp/{}'.format(dll_name)]),
                  ('site-packages/hellocpp', ['LICENSE']),
                  ('site-packages/hellocpp', ['README.md'])]
    )

