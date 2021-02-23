#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	//Mat img = imread("lemma.jpg");
	//namedWindow("image", WINDOW_NORMAL);
	//imshow("image", img);	
	cout << "hi!";
	//waitKey(0);
	
	

	return 0;
}

/*

void filterMean(Mat image, int size) {
	Mat dst;
	if (size % 2 == 0) {
		printf("la taille doit etre impair");
		return;
	}
	int skip = size / 2;

	for (int r = skip; r < image.rows - skip; ++r) {
		for (int c = skip; c < image.cols - skip; ++c) {

			int moy = 0;
			for (int i = r - skip; i <= r + skip; i++) {
				for (int j = c - skip; j <= c + skip; j++) {
					
					moy += image.at<uchar>(i, j);

				}
			}

			dst.at<uchar>(r, c) = round(moy / (size * size));
		}
	}
}


void filtreMediane(Mat image, Mat dst, int size) {
	int* tab = (int*)malloc(size * size * sizeof(int));
	if (size % 2 == 0) {
		printf("la taille doit etre impair");
		return;
	}
	int skip = size / 2;// nombre de lignes,colones non trait�es

	for (int r = skip; r < image.rows - skip; r++) {
		for (int c = skip; c < image.cols - skip; c++) {

			for (int i = r - skip; i <= r + skip; i++) {
				// remplire le tableau temporaire
				for (int j = c - skip; j <= c + skip; j++) {
					tab[(i - r + skip) * size + j - c + skip] = image.at<uchar>(i, j);
				}
			}
			//quick sort
			qsort(tab, size * size, sizeof(int), compare);
			//recuperation de la mediane
			dst.at<uchar>(r, c) = tab[(size * size - 1) / 2];
			printf("%d", dst.at<uchar>(r, c));
		}
	}
}


int //compare(const void * a, const void * b) {
	// comparison entre deux entier
	return (*(int*)a - *(int*)b);
}

*/