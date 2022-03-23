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

Check the te version installed for C++

      pkg-config --modversion opencv4
      
[Tutorial](https://linux.die.net/man/1/pkg-config) for `pkg-config`.

In my case the opencv4.pc file was created in `/usr/lib/x86_64-linux-gnu/pkgconfig` folder.
Inside you can see a block such as:

      prefix=/usr
      exec_prefix=${prefix}
      libdir=${exec_prefix}/lib/x86_64-linux-gnu
      includedir_old=${prefix}/include/opencv4/opencv
      includedir_new=${prefix}/include/opencv4

This means that when compiler is looking for included libraries in the program, it searches for `pkg-config` folder that contains `opencv4.pc` file that contains the metadata for thelibraries that are installed. According to the above block of metadata, it will search the following location:

      usr/lib/x86_64-linux-gnu
      
If you navigate to this folder, you will locate the pkg-config folder and opencv4.pc inside it. 


## File execution

      g++ automhmatrix.cpp -o output `pkg-config --cflags --libs opencv4`
      ./output input_images/Radovan.jpg   

 --cflags
 
This prints pre-processor and compile flags required to compile the packages on the command line, including flags for all their dependencies. Flags are "compressed" so that each identical flag appears only once. pkg-config exits with a nonzero code if it can't find metadata for one or more of the packages on the command line.

--libs

This option is identical to "--cflags", only it prints the link flags. As with "--cflags", duplicate flags are merged (maintaining proper ordering), and flags for dependencies are included in the output.

     
      
      
