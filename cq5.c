#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter number of elements in an array");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int avg=sum/n;
    printf("%d",avg);
}