''' 
Programmer: Nikola Andric
Last Eddited: Feb. 27. 2022.
Email: nikolazeljkoandric@gmail.com
'''

import SimpleITK as sitk
import sys
import os

#getting the name of the image to read in
img_name = sys.argv[1]

#using PNGImageIO class for the reader. Reading in .jpg .JPG .jpeg .JPEG formats
image = sitk.ReadImage("input_images/"+img_name, imageIO="JPEGImageIO")



#the name of the resulting image that will be written in hte same directory where this script is.
final_name = "overlaped_" + img_name

# Writing the image in the specified folder
sitk.WriteImage(image, final_name)
