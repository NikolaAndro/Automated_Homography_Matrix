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
#include <opencv2/highgui.hpp>
using namespace cv;
int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    Mat image;
    image = imread( argv[1], 1 );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}

//******************   Harris Corner Detector   ******************
//******************   Similarity Criterion (SIFT)   ******************

//******************   Set of Correspondences   ******************

//******************   RANSAC   ******************
