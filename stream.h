#include <stdio.h>

#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/imgproc/imgproc_c.h"
using namespace cv;
#include <iostream>
#include <highgui.h>

#ifdef __cplusplus
extern "C" {
#endif

//CvCapture* get_capture_webcam(int index);
CvCapture* get_capture_video_stream(char *path);
//IplImage* get_webcam_frame(CvCapture *cap);

#ifdef __cplusplus
}
#endif
