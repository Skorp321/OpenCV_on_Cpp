#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

void main() {


	cv::Mat img;

	while (true) {

		std::string path = "Resources/test.png";
		cv::Mat img = cv::imread(path);
		cv::Mat imgGray, imgBlure, imgCanny, imgDia, imgErode;

		cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
		cv::GaussianBlur(img, imgBlure, cv::Size(15, 15), 5000, 1000);
		cv::Canny(imgGray, imgCanny, 50, 150);

		cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
		cv::dilate(imgCanny, imgDia, kernel);
		cv::erode(imgDia, imgErode, kernel);

		cv::imshow("Image", img);
		cv::imshow("Image Gray", imgGray);
		cv::imshow("Image Blure", imgBlure);
		cv::imshow("Image Cany", imgCanny);
		cv::imshow("Image Dia", imgDia);
		cv::imshow("Image Erode", imgErode);


		cv::waitKey();
		
	}
}