Author : Dinika Shenal Netolpitiya Mahanama Siriwardana

ID : 221AEC010

Lab Work 4 : Integral - Arcsine(x) function

# The Contents of this folder

-> "sample_screenshots" : This folder contains the screenshots of the sample outputs of the compiled codes of "integrations_rectangle.c, integrations_simpsons.c and integrations_trapezoidal.c", when the user input is "first limit = -0.5 and second limit = 0.7".

-> "README.md" : This readme file contains the report about this lab work.

-> "integral_limits.txt" : This text file contains the user entered first limit and second limit.

-> "integrations.gp" : This ".gp" file contains the script for the gnuplot.

-> "integrations.png" : This ".png" file contains the graph of the Arcsine(x) function and the Area under the curve for the integrated region.

-> "integrations_rectangle.c" : This C file contains the main function to integrate the Arcsine(x) function according to the Rectangle rule.

-> "integrations_simpsons.c" : This C file contains the main function to integrate the Arcsine(x) function according to the Simpsons rule.

-> "integrations_trapezoidal.c" : This C file contains the main function to integrate the Arcsine(x) function according to the Trapezoidal rule.


# Report on Lab Work 4

## Introduction

This report discusses the Integration of the Arcsine(x) function through various coded versions, where the various integral methods such as Rectangle Rule, Simpsons Rule and Trapezoidal Rule have been embedded in the Lab Work. These different methods are included as seperate C file formats, which can be compiles and run in order to get the desired result for the Integration of Arcsine(x) function.

## Operation of the Lab Work

Firstly, in this Lab Work as mentionned above, there are three C file which contain the unique three integration methods. These three methods have been coded according to the Proven Mathematical Formulae of their Respective Methods. In all these three C files, the three integration methods are included as seperate functions which are then called in the main function in their respective C files. 

Furthermore, one of the other interesting factors in this Lab Work is that it allows the user to enter the "first and second limits" to integrate the Arcsine(x) function. And these two limits are stored in the "integrations.txt" file, which are later used in the Gnuplot script when plotting the Area of Integration of the Arcsine(x) function. \
Also, this "integrations.txt" file auto-updates with the recent C file out of the three C files that is compiled and run recently, for example: if "integrations_rectangle.c" is compiled and run for user input "first limit = -0.7 and second limit = 0.7" then the "integrations.txt" will store "-0.7" and "0.7", and if the "integrations_simpsons.c" is then compiled and run for user intput "first limit = -0.5 and second limit = 0.5" then the "integrations.txt" will store "-0.5" and "0.5". Consequently, this will result in the Gnuplot script to plot the graph for the recently performed C file.

