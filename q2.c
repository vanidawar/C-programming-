#include <stdio.h>
int main()
{
    int n,fact=1,c=1;
    printf("enter no");
    scanf("%d",&n);
    while (c<=n)
    {
        fact=fact*c;
        c++;
    }
    printf("factorial of %d is:%d",n,fact);
}