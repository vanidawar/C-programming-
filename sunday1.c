//Q1: WAP to find the sum and product of the elements of the anti-diagonal of the matrix//

#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter size of matrix");
    scanf("%d", &n);
    int arr[n][n];
    for (i=0;i<n;i++) 
    {
        for (j=0;j<n;j++) 
        {
            printf("enter element");
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0,prod=1;
    for (i=0;i<n;i++) 
    {
        sum=sum+arr[i][n-1-i];
        prod=prod*arr[i][n-1-i];
    }
    printf("Sum of anti-diagonal %d", sum);
    printf("Product of anti-diagonal %d", prod);
}
