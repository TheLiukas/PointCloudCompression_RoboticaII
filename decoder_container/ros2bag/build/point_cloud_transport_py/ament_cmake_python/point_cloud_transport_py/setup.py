from setuptools import find_packages
from setuptools import setup

setup(
    name='point_cloud_transport_py',
    version='1.0.18',
    packages=find_packages(
        include=('point_cloud_transport_py', 'point_cloud_transport_py.*')),
)
