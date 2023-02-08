// Bisection method

#include<stdio.h>
#include<math.h>

float func(float a,float b,float e)
{
    float n;
    n=ceil((log10(fabs(b-a))-log10(e))/log10(2));
    return n;
}
float fx(float x)
{
    float m = 1/pow(x,3)+sin(x);
    return m; 
}
float main()
{
    float a,b,c,x,e=0.000005;
    int count=0,n;
    printf("\n\nEnter the values of a and b:\n"); 
    scanf("%f%f",&a,&b);
    n=func(a,b,e);
    if((fx(a)*fx(b))>0)
    {
        printf("\nError\n");
    }
    else
    {
        if((fx(a)*fx(b))==0)
        {
        if(fx(a)==0)
            printf("%f",a);
        if(fx(b)==0)
            printf("%f",b);
        }
    else
    {
    do
    {  
        count++;
        if(count>2*n)
        {
            printf("\nError\n");
            return 1;
        }
        c=(a+b)/2;
        printf("\n%d\t%f\t%f\t%f\t%f",count,a,b,c,fx(c));
        if((fx(a)*fx(c))>0)
        {
        a=c;
        }
        else
        {
        b=c;
        }
    } while(fabs(fx(c))>e);
    printf("\n The required solution is %f\n",c);
    }
    }
}