#include <stdio.h>
#include <math.h>

int main() {
    double lambda, a1, a2, a3;
    int m;
    double theta1, theta2, theta3;

    printf("Enter the wavelength between 380 and 750: ");
    scanf("%lf", &lambda);

    if (lambda < 380 || lambda > 750) {
        printf("Out of the range.\n");
        return 1;
    }

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter three values of a: ");
    scanf("%lf %lf %lf", &a1, &a2, &a3);

    theta1 = asin(m * lambda * 1e-9 / a1);
    theta2 = asin(m * lambda * 1e-9 / a2);
    theta3 = asin(m * lambda * 1e-9 / a3);

    printf("Theta for a1: %lf\n", theta1 * 180.0 / M_PI);
    printf("Theta for a2: %lf\n", theta2 * 180.0 / M_PI);
    printf("Theta for a3: %lf\n", theta3 * 180.0 / M_PI);

    if (theta1 > theta2 && theta1 > theta3) {
        printf("Slit 'a1' bent the light more.\n");
    } else if (theta2 > theta1 && theta2 > theta3) {
        printf("Slit 'a2' bent the light more.\n");
    } else {
        printf("Slit 'a3' bent the light more.\n");
    }

    return 0;
}
