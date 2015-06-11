//
//  JNILibfreenect2.cpp
//  JNILibfreenect2
//
//  Created by tom on 6/10/15.
//  Copyright (c) 2015 tom. All rights reserved.
//

#include <stdio.h>

#include "JNILibfreenect2.h"

namespace LibFreenect2 {
    Device::Device()
    {
        std::cout<<"init kinect 2 "<<v<<std::endl;
        
        protonect = new Protonect();
        
    }
    void Device::open()
    {
        
        //bool retVal = protonect->openKinect("/Users/tom/Documents/Programming/openFrameworks/of_v0.8.4_osx_release/apps/myApps/KinectV2Test/bin/data");
        
    }
    
    void Device::stop()
    {
       // protonect->closeKinect();
        std::cout<<"stopging kinect v2 "<<v<<std::endl;
        
    }
}