#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cout << "Hello OpenCV " << CV_VERSION << endl;

	Mat img;
	img = imread("lenna.bmp");	// bmp 파일을 불러와 img 변수에 저장

	if (img.empty())	// 예외 처리 - bmp 파일을 불러오지 못했을 경우 empty()는 true 반환
	{
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");	// 영상을 화면에 나타내기 위한 image라는 새로운 창 생성
	imshow("image", img);	// image라는 창에 img 객체 출력
	
	waitKey();	// 사용자의 키보드 입력을 기다리는 함수 - 사용자가 키보드를 누르면 다음 행으로 넘어감

	return 0;
}