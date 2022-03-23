# Automated_Homography_Matrix
Homography in C++. Goal is to automatically compute the H matrix for have 2D, 3D, and 4D homographic transformations. 

## Install OpenCV for C++ on your machine

      # Install minimal prerequisites (Ubuntu 18.04 as reference)
      sudo apt update && sudo apt install -y cmake g++ wget unzip
      
      # Download and unpack sources
      wget -O opencv.zip https://github.com/opencv/opencv/archive/4.x.zip
      unzip opencv.zip
      
      # Create build directory
      mkdir -p build && cd build
      
      # Configure
      cmake  ../opencv-4.x
      
      # Build
      cmake --build .
      
NOTE: You will need to add the opencv4 into the path for gcc in order for your editor to recognize the import.

In my case the opencv4 was in opt/opencv/include. Hence, I have done the following command

      PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/opt/opencv/include

This will only work for the current session of the terminal. If you want this path to be remembered forever, you need to add it to `~/.basrc` file.

      cd
      nano .bashrc
      
      #at the bottom of the file add the following
      export PKG_CONFIG_PATH="$PKG_CONFIG_PATH:/opt/opencv/include"

## File execution

      g++ automhmatrix.cpp -o output `pkg-config --cflags --libs opencv4`
      ./output input_images/Radovan.jpg   

      
      
      
