/**
 * @file automhmatrix.cpp
 * @author Nikola Andric (namdd@umsystem.com)
 * @brief This file will performe automatic computation of
 * image homography by the Random Sample Consensus (RANSAC) algorithm.;
 * @version 0.1
 * @date 2022-03-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 
#include <opencv2/opencv.hpp>
#include <opencv2/core/types_c.h>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/nonfree/nonfree.hpp>
#include <opencv2/features2d/features2d.hpp> 
// #include "xfeatures2d.hpp"

#include <string> 
#include <iostream>



// using namespace cv;

int main(int argc, char** argv )
{
    IplImage *img_1=0, *img_2=0, *gimg_1=0, *gimg_2=0;

    // Make sure all the parameters are set when executing
    if ( argc != 2 )
    {
        printf("Missing a parameter. Usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    // Declare an image
    cv::Mat image;
    image = cv::imread( argv[1], 1 );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    
    //****************** Step 1: Extract interest points and their descriptors   ****************** 
    // cv::xfeatures2d::SiftFeatureDetector detector;
    

    // Create the display window
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE );

    // Show the image
    cv::imshow("Display Image", image);

    // Wait for a keystroke in the windowv
    int k = cv::waitKey(0); 
    if(k == 's')
    {
        cv::imwrite("output_image.jpg", image);
    }
    return 0;
}





//******************   Harris Corner Detector   ******************
//******************   Similarity Criterion (SIFT)   ******************

//******************   Set of Correspondences   ******************

//******************   RANSAC   ******************


/**
 * @brief # Package Information for pkg-config

prefix=/usr
exec_prefix=${prefix}
libdir=${exec_prefix}/lib/x86_64-linux-gnu
includedir_old=${prefix}/include/opencv4/opencv
includedir_new=${prefix}/include/opencv4

Name: OpenCV
Description: Open Source Computer Vision Library
Version: 4.2.0
Libs: -L${exec_prefix}/lib/x86_64-linux-gnu -lopencv_stitching -lopencv_aruco -lopencv_bgsegm -lopencv_bioinspired -lopencv_c>
Libs.private: -ldl -lm -lpthread -lrt
Cflags: -I${includedir_old} -I${includedir_new}

 * 
 */