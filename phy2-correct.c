#include <stdio.h>
#include <math.h>

int main() {
    double lambda_green = 530.0;
    double lambda_red = 700.0;
    double theta_green = 65.0;
    int m_red = 2;

    double theta_rad = theta_green * M_PI / 180.0;


    double slit_separation = (3 * lambda_green) / sin(theta_rad);


    double theta_red = asin(m_red * lambda_red / slit_separation) * 180.0 / M_PI;

    printf("The angle for the second-order bright spot for red light: %.2lf degrees\n", theta_red);

    return 0;
}
