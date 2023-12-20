#include <iostream>
#include <vector>
#include <string>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;

int main (){

Mat img = imread("./dog.jpeg");
if(!img.data) {
    cout<<"couldn't load the image";
    return -1;
}
else{
    cout<<"loaded the image";
    imshow("img",img);
} 

while(true)
{
    int c = waitKey(20);
    if(27==(char) c)
    break;
}
    return 0;
}       

