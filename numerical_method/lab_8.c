// Simpson's 3/8 rule

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (1 / (1+x*x));
}

int main()
{
    float a, b, h, sum,k;
    int i,n;
    printf("Input : ");
    printf("Enter initial interval: ");
    scanf("%f",&a);
    printf("\nEnter final interval: ");
    scanf("%f",&b);
    printf("\nEnter the number of sub-intervals: ");
    scanf("%d",&n);

    // calculate h

        h = (b - a) / n;

    sum = f(a) + f(b);

    for (i = 1; i <= n - 1; i++)
    {
        k = a + i * h;

        if (i % 3 == 0)
        {
            sum = sum + 2 * (f(k));
        }
        else
        {
            sum = sum + 3 * (f(k));
        }
    }

    sum = (sum * h * 3) / 8;
    printf("The definite integral  is %f",sum);
}
