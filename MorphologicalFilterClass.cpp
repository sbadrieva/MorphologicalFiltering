//
//  MorphologicalFilterClass.cpp
//  OpenCv
//
//  Created by Shokhina Badrieva on 5/4/21.
//  Copyright © 2021 Shokhina Badrieva. All rights reserved.
//

#include "MorphologicalFilterClass.hpp"
#include <iostream>
#include <opencv2/opencv.hpp>
#include "OrderStatisticFiltersClass.hpp"


using namespace std;
using namespace cv;



void bottomHat(Mat&src,Mat&dst){
    Mat max,min;
    maxFilter(src,max,7);
    minFilter(max, min, 7);
    dst=src-min;
}

void topHat(Mat&src,Mat&dst){
    Mat max,min;
    minFilter(src, min, 7);
    maxFilter(min,max,7);
    dst=src-max;
    
}

void morphEnhancement(Mat&src,Mat&dst){
    Mat tophat,bottomhat;
    bottomHat(src, bottomhat);
    topHat(src, tophat);
    dst=src+tophat-bottomhat;
}

void morphEdgeDetector(Mat&src,Mat&dst){
    Mat max;
    maxFilter(src,max,3);
    dst=max-src;
    double thresh=0;
    double maxValue=255;
    threshold(dst,dst,thresh,maxValue,THRESH_OTSU);
}

void morphBoundaryDetector(Mat&src,Mat&dst){
    Mat max, min;
    maxFilter(src, max, 3);
    minFilter(src, min, 3);
    dst=max-min;
}
