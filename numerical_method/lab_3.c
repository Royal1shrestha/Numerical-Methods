#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(x*x*x-3*x*x-5); 
}
float g(float x)
{
    return(3*x*x-6*x); 
}

float main()
{
    float a,b,e,rel_err;
    int count=0;
    printf("\n\nEnter the values of a :\n"); 
    scanf("%f",&a);
    printf("Enter the values of allowed error :\n");
    scanf("%f",&e);
    if(g(a)<e)
    {
        printf("\nMathematical error.\n");
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
        b=a-(f(a)/g(a));
        rel_err=fabs((b-a)/b);
        printf("\n%d\t%f\t%f\t%f",count,a,b,rel_err);
        a=b;
    } while(fabs(f(a))>=e);
    printf("\n The required solution is %f\n",b);
    }
}