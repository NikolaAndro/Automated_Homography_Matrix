# Automated_Homography_Matrix
Homography in C++. Goal is to automatically compute the H matrix for have 2D, 3D, and 4D homographic transformations. 

## Install OpenCV for C++ on your machine

      # Step 1: Install build tools
      sudo apt install build-essential cmake git pkg-config libgtk-3-dev \
      libavcodec-dev libavformat-dev libswscale-dev libv4l-dev \
      libxvidcore-dev libx264-dev libjpeg-dev libpng-dev libtiff-dev \
      gfortran openexr libatlas-base-dev python3-dev python3-numpy \
      libtbb2 libtbb-dev libdc1394-22-dev libopenexr-dev \
      libgstreamer-plugins-base1.0-dev libgstreamer1.0-dev

      # Step 2: Clone OpenCV’s repositories
      # Make the directory and navigate in it. Clone the OpenCV repository by running the following command:
      mkdir ~/opencv_build && cd ~/opencv_build
      git clone https://github.com/opencv/opencv.git

      # Then, clone the OpenCV contrib repositories by using the following command:
      git clone https://github.com/opencv/opencv_contrib.git

      # Step 3: Setup OpenCV build
      cd ~/opencv_build/opencv
      mkdir -p build && cd build

      # Now, setup OpenCV build with CMake by using the following command:
      cmake -D CMAKE_BUILD_TYPE=RELEASE \
      -D CMAKE_INSTALL_PREFIX=/usr/local \
      -D INSTALL_C_EXAMPLES=ON \
      -D INSTALL_PYTHON_EXAMPLES=ON \
      -D OPENCV_GENERATE_PKGCONFIG=ON \
      -D OPENCV_EXTRA_MODULES_PATH=~/opencv_build/opencv_contrib/modules \
      -D BUILD_EXAMPLES=ON ..

      # Step 4: Start a compilation
      make -j8

      # Step 5:  Install OpenCV
      sudo make install

      # After completing the installation process, type the following command to verify the OpenCV installation. For C++ binding:
      pkg-config --modversion opencv4

      
      
      
