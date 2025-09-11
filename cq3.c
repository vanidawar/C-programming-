#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter number of elements in an array");
    scanf("%d",&n);
    int a[n];
    int c=0;
    for (i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                c=c+1;
                break;
            }
        } 
    }
    printf("no of duplicate elements is: %d",c);
}