// Inverse of matrix

#include<stdio.h>
#include<math.h>
#include<conio.h>

#define SIZE 10
int main()
{
    float a[SIZE][SIZE*2],diag,ratio;
    int i,j,k,n;
    printf("Enter the order of square matrix:");
    scanf("%d",&n);
    printf("Enter the elements of the augmented matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
            if(i==j)
            {
                a[i][j+n]=1;
            }
            else
            {
                a[i][j+n]=0;
            }
        }
    }
    printf("The represented matrix is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            printf("%10.4f\t",a[i][j]);
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
                for(k=i;k<2*n;k++)
                {
                    a[j][k] = a[j][k]-ratio*a[i][k];
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        diag=a[i][i];
        for(j=0;j<2*n;j++)
        {
            a[i][j]=a[i][j]/diag;
        }
    }
    printf("\n");
    printf("The inverse of matrix is \n");
    for(i=0;i<n;i++)
    {
        for(j=n;j<2*n;j++)
        {
            printf("%10.4f\t",a[i][j]);
        }
        printf("\n");
    }
}