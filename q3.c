#include <stdio.h>
int main()
{
    int n,i,n1,c,n2=0,n3=1;
    printf("enter number to search and length of series");
    scanf("%d %d",&n,&n1);
    for (i=0;i<=n1;i++)
    {
        c=n2+n3;
        n2=n3;
        n3=c;
        if (c==n)
        {
            printf("found");
        }
        else
        {
            printf("not found");
        }
    }
}