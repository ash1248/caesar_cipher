from setuptools import find_packages
from setuptools import setup

setup(
    name='cipher_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('cipher_interfaces', 'cipher_interfaces.*')),
)
