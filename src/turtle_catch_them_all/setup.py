from setuptools import find_packages, setup

package_name = 'turtle_catch_them_all'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='praveen',
    maintainer_email='bpradaap@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "turtlecatch=turtle_catch_them_all.turtle_controller:main",
            "turtlespawn=turtle_catch_them_all.spawner:main"
        ],
    },
)
