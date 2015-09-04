#include <opencv2\opencv.hpp>
#include <iostream>

using namespace std; 
using namespace cv;
void Q_10();
void Q_50();
void Q_90();
int q_10[8][8];
int q_50[8][8];
int q_90[8][8];

int  main(){
	Mat img = imread("C:/Users/Student/Documents/JpegCompression/JpegCompression/img_8_8.jpg");
	cv::resize(img, img, Size(8, 8), CV_8UC4);
	imshow("Display", img);
	cout << img.cols << endl;
	cout << img.rows << endl;
	int pixelImg[8][8];
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			
			cout << static_cast<int>(img.at<uchar>(j, i)) << " ";
			pixelImg[j][i] = static_cast<int>(img.at<uchar>(j, i));
		}
		cout << endl<<endl;
	}
	Q_10();

	cvWaitKey();
}
void Q_10()
{

	int data[64] = { 80, 60, 50, 80, 120, 200, 255, 255,
		55, 60, 70, 95, 130, 255, 255, 255,
		70, 65, 80, 120, 200, 255, 255, 255,
		70, 85, 110, 145, 255, 255, 255, 255,
		90, 110, 185, 255, 255, 255, 255, 255,
		120, 175, 255, 255, 255, 255, 255, 255,
		245, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255 };
	int n = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			q_10[j][i] = data[n];
			n++;
		}

	}

}
void Q_50()
{
	int q_50[8][8];
}
void Q_90()
{
	int q_90[8][8];

}