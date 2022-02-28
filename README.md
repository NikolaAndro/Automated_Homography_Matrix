# Homography_SimpleITK
Homography in C++. Goal is to have 2D, 3D, and 4D transformations. 

# [SimpleITK](https://simpleitk.readthedocs.io/en/master/about.html)

SimpleITK is a simplified programming interface to the algorithms and data structures of the Insight Toolkit (ITK).

# Installaion Instructions for Linux

There are multiple ways to go about this. For now, python instalation is the only instalation that is completed. **Superbuild gave an error**.

## Python installation
        
        pip install simpleitk
        
## Superbuild 

1. Clone [this repository}(https://github.com/SimpleITK/SimpleITK)
2. Execute the following commands:
        
        cd SimpleITK
        mkdir SimpleITK-build
        cd SimpleITK-build
        cmake ../SimpleITK/SuperBuild
        
        cd ..
        make
