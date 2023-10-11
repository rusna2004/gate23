#include <stdio.h>

double calculateUnbiasedEstimator(double Y, int n) {
    return (((n + 1) / (double)n) * (Y - 1.0/3.0)) + 1.0/3.0;
}

int main() {
    double Y; // Replace with the actual maximum value in your sample
    int n;    // Replace with the sample size

    // Input values for Y and n
    printf("Enter the maximum value Y: ");
    scanf("%lf", &Y);
    printf("Enter the sample size n: ");
    scanf("%d", &n);

    double estimator = calculateUnbiasedEstimator(Y, n);
    printf("The unbiased estimator of theta is: %lf\n", estimator);

    return 0;
}

