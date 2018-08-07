#include "stream.h"

static CvCapture * cap;
static int cpp_video_capture = 0;

int main()
{
	char * filename = "ROV2.mp4";
	if(filename)
	{
		printf("the video name: %s\n",filename);
		cpp_video_capture = 1;
		cap = get_capture_video_stream(filename);
	}
	if(!cap) printf("Couldn't connect to webcam.\n");
}
