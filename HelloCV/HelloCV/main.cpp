#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cout << "Hello OpenCV " << CV_VERSION << endl;

	Mat img;
	img = imread("lenna.bmp");	// bmp ������ �ҷ��� img ������ ����

	if (img.empty())	// ���� ó�� - bmp ������ �ҷ����� ������ ��� empty()�� true ��ȯ
	{
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");	// ������ ȭ�鿡 ��Ÿ���� ���� image��� ���ο� â ����
	imshow("image", img);	// image��� â�� img ��ü ���
	
	waitKey();	// ������� Ű���� �Է��� ��ٸ��� �Լ� - ����ڰ� Ű���带 ������ ���� ������ �Ѿ

	return 0;
}