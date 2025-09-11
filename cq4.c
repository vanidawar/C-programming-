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
    int search;
    printf("enter element to search");
    scanf("%d",&search);
    for (i=0;i<n;i++)
    {
        if (a[i]==search)
        {
            printf("element found");
        }
    }
}