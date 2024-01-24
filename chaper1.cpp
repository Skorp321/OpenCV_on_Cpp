#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

void main() {

	cv::VideoCapture cap(0);
	cv::Mat img;

	while(true) {
		cap.read(img);

		cv::imshow("Image", img);
		cv::waitKey(1);
	}
}