#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

void main() {
	cv::Mat img(512, 512, CV_8UC3, cv::Scalar(255,255,255));

	cv::circle(img, cv::Point(255, 255), 155, cv::Scalar(0, 69, 255), cv::FILLED);
	cv::rectangle(img, cv::Point(130, 165), cv::Point(382, 286), cv::Scalar(255, 255, 255), cv::FILLED);
	cv::line(img, cv::Point(130, 296), cv::Point(382, 296), cv::Scalar(255, 255, 255), 2);

	cv::putText(img, "Murtaza's Workshop", cv::Point(137, 262), cv::FONT_HERSHEY_COMPLEX, 0.7, cv::Scalar(0, 69, 255), 2);

	cv::imshow("Image", img);
	cv::waitKey();

}