#include <stdio.h>
int main()
{
    int n;
    float i;
    printf("enter value of n");
    scanf("%d",&n);
    float sum=0.0;
    for (i=1.0;i<=n;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("%f",sum);
}