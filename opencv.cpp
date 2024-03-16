#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image = cv::imread("image.jpg", cv::IMREAD_COLOR);
    if (image.empty()) {
        std::cerr << "Error: Unable to load image\n";
        return 1;
    }
    cv::imshow("Image", image);
    cv::waitKey(0);
    return 0;
}
