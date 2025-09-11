#include <stdio.h>
int main()
{
    int n,i,j;
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
        int c=0;
        for (j=0;j<n;j++)
        {
            if (a[i]==a[j])
            {
                c=c+1;
            }
        }
        if (c == 1) 
        {
            printf("%d ", a[i]);
        }
    }
}