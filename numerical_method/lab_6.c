// Trapezoidal rule

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (1 / (1+x*x));
}

int main()
{
    float a, b, h, sum, integral;
    int n;
    printf("Input : ");
    printf("Enter initial interval: ");
    scanf("%f",&a);
    printf("\nEnter final interval: ");
    scanf("%f",&b);
    printf("\nEnter the number of sub-intervals: ");
    scanf("%d",&n);
    float x[n + 1], y[n + 1];

    // calculate h

    h = (b - a) / n;
    for (int i = 0; i <= n; i++)
    {
        x[i] = a + i * h;
        y[i] = f(x[i]);
    }
    for (int i = 1; i < n; i++)
    {
        sum = sum + h * y[i];
    }
    integral = h / 2.0 * (y[0] + y[n]) + sum;
    printf("The definite integral  is ");
    printf("%f",integral);
}
