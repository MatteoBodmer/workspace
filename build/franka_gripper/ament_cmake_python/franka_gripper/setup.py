from setuptools import find_packages
from setuptools import setup

setup(
    name='franka_gripper',
    version='1.0.0',
    packages=find_packages(
        include=('franka_gripper', 'franka_gripper.*')),
)
