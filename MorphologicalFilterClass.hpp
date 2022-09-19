//
//  MorphologicalFilterClass.hpp
//  OpenCv
//
//  Created by Shokhina Badrieva on 5/4/21.
//  Copyright © 2021 Shokhina Badrieva. All rights reserved.
//

#ifndef MorphologicalFilterClass_hpp
#define MorphologicalFilterClass_hpp

#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>


using namespace std;
using namespace cv;

void bottomHat(Mat&src,Mat&dst);
void topHat(Mat&src,Mat&dst);
void morphEnhancement(Mat&src,Mat&dst);
void morphEdgeDetector(Mat&src,Mat&dst);
void morphBoundaryDetector(Mat&src,Mat&dst);

#endif /* MorphologicalFilterClass_hpp */
