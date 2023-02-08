// Secant method

#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(x*x*x-3*x*x-5); 
}
float main()
{
    float a,b,c,d,e;
    int count=0,n;
    printf("\n\nEnter the values of a and b:\n"); 
    scanf("%f%f",&a,&b);
    printf("Enter the values of allowed error :\n");
    scanf("%f",&e);
    if (fabs(f(a)-f(b)) > 0.0005)
    {
        printf("\nSolution cannot be found as the values of a and b are same.\n");
    }
    else if((f(a)*f(b))==0)
    {
        if(f(a)==0)
            printf("%f",a);
        if(f(b)==0)
            printf("%f",b);
    }
    else
    {
    do
    {  
        count++;
        if(count>20)
        {
            printf("Error");
            return 1;
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        printf("\n%d\t%f\t%f\t%f\t%f",count,a,b,c,f(c));
        a=b;
        b=c;
    } while(fabs(f(c))>e);
    printf("\n The required solution is %f\n",c);
    }
}