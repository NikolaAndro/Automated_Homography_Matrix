# Automated_Homography_Matrix
Homography in C++. Goal is to automatically compute the H matrix for have 2D, 3D, and 4D homographic transformations. 

# Instalation of SIFT3D on Ubuntu 20.04

NOTE: We cannot install this package from binaries since it requires some dependencies such as DCMTK version 5 that is too old. However, this is an optional dependency. Hence, follow the steps below for installation.

	1. Clone this [repository](https://github.com/bbrister/SIFT3D).
	2. cd SIFT3D
	3. mkdir build && cd build

Before the step 4, you might want to disable [find_package()](https://cmake.org/cmake/help/v3.5/command/find_package.html#command:find_package) calls for DCMTK package using the following commnad: `CMAKE_DISABLE_FIND_PACKAGE_DCMTK=TRUE`. 

**[Documentation](https://cmake.org/cmake/help/v3.5/variable/CMAKE_DISABLE_FIND_PACKAGE_PackageName.html#variable:CMAKE_DISABLE_FIND_PACKAGE_%3CPackageName%3E)**: Every non-REQUIRED find_package() call in a project can be disabled by setting the variable CMAKE_DISABLE_FIND_PACKAGE_<PackageName> to TRUE. This can be used to build a project without an optional package, although that package is installed.
	
	# Create the Makefiles
	4. cmake .. 
	
If you ran `cmake ..` without disabling DCMTK, then remove it from `CMakeCache.txt` file that was created once you ran `cmake ..` command inside the `build` folder (should be lines 253-263).

**[Documentation](https://cmake.org/cmake/help/v3.5/variable/CMAKE_DISABLE_FIND_PACKAGE_PackageName.html#variable:CMAKE_DISABLE_FIND_PACKAGE_%3CPackageName%3E)**: This switch (CMAKE_DISABLE_FIND_PACKAGE_<PackageName>) should be used during the initial CMake run. Otherwise if the package has already been found in a previous CMake run, the variables which have been stored in the cache will still be there. In that case it is recommended to remove the cache variables for this package from the cache using the cache editor or [cmake(1) -U](https://cmake.org/cmake/help/v3.5/manual/cmake.1.html#manual:cmake(1)).


	# Compile the program
	5. make
	
	# Install the files
	6. sudo make install
		


