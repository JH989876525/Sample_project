#include <opencv2/highgui.hpp>
#include <auto_canny.h>
#include <api.h>

int main(int argc, char *argv[])
{
    cv::Mat input, output;
    input = cv::imread("pic/linux.png", cv::IMREAD_COLOR);

    auto_canny(input, output);

    cv::imwrite("output.jpg", output);

    function_jh();

    return 0;
}
