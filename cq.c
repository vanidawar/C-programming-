#include <stdio.h>
int main()
{
    int n,i;
    printf("enter number of elements in an array");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
    }
    for (i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}