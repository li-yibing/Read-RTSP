#include "stream.h"

CvCapture* get_capture_video_stream(char *path) {
	CvCapture* cap = NULL;
	try {
		//cap = (CvCapture*)new cv::VideoCapture(path);
		cap = (CvCapture*)new VideoCapture(path);
	}
	catch (...) {
		std::cout << " Error: Web-camera " << path << " can't be opened! \n";
	}
	return cap;
}

CvCapture* get_capture_webcam(int index) {
	CvCapture* cap = NULL;
	try {
		cap = (CvCapture*)new cv::VideoCapture(index);
		//((cv::VideoCapture*)cap)->set(CV_CAP_PROP_FRAME_WIDTH, 1280);
		//((cv::VideoCapture*)cap)->set(CV_CAP_PROP_FRAME_HEIGHT, 960);
	}
	catch (...) {
		std::cout << " Error: Web-camera " << index << " can't be opened! \n";
	}
	return cap;
}

IplImage* get_webcam_frame(CvCapture *cap) {
	IplImage* src = NULL;
	try {
		cv::VideoCapture &cpp_cap = *(cv::VideoCapture *)cap;
		cv::Mat frame;
		if (cpp_cap.isOpened()) 
		{
			cpp_cap >> frame;
			IplImage tmp = frame;
			src = cvCloneImage(&tmp);
		}
		else {
			std::cout << " Video-stream stoped! \n";
		}
	}
	catch (...) {
		std::cout << " Video-stream stoped! \n";
	}
	return src;
}

