//Q2: WAP to find the sum of upper triangle of a 3x3 matrix//

#include <stdio.h>
int main() 
{
    int i,j,sum=0;
    int arr[3][3];
    for (i=0;i<3;i++) 
    {
        for (j=0;j<3;j++) 
        {
            printf("enter element");
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<3;i++) 
    {
        for (j=i;j<3;j++) 
        {
            sum=sum+arr[i][j];
        }
    }
    printf("Sum of upper triangle %d", sum);
}
