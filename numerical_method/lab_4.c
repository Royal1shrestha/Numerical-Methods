#include<stdio.h>
#include<math.h>
#include<conio.h>

#define SIZE 10
int main()
{
    float a[SIZE][SIZE+1],x[SIZE];
    int i,j,k,n,c;
    printf("Enter the order of square matrix:");
    scanf("%d",&n);
    printf("Enter the elements of the augmented matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("The given augmented matrix is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%0.1f\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                float ratio=a[j][i]/a[i][i];
                for(k=0;k<n+1;k++)
                {
                    a[j][k] = a[j][k]-ratio*a[i][k];
                }
            }
        }
    }
    printf("The solution is \n");
    for(i=0;i<n;i++)
    {
        x[i]=a[i][n]/a[i][i];
        printf("x[%d]=%f\n",i,x[i]);
    }
}