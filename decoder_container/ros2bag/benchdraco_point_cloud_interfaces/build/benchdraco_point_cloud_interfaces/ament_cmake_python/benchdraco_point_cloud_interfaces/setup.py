from setuptools import find_packages
from setuptools import setup

setup(
    name='benchdraco_point_cloud_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('benchdraco_point_cloud_interfaces', 'benchdraco_point_cloud_interfaces.*')),
)
