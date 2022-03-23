# Automated_Homography_Matrix
Homography in C++. Goal is to automatically compute the H matrix for have 2D, 3D, and 4D homographic transformations. 

# Instalation of SIFT3D on Ubuntu 20.04

Install all dependencies:

	sudo apt-get install zlib1g-dev liblapack-dev libdcmtk-dev libnifti-dev

Download [the sift3d packet]() and install it (or try to install it).

In my case, I needed to update the `libdcmtk-dev` to a newer version. Hence, I did the following steps:

1. `sudo apt-get install -y libdcmtk-dev` to make sure we have the packet
2. `sudo apt --fix-broken install` to update the `libdcmtk-dev` in the sift3d folder




