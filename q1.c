#include <stdio.h>
int main()
{
    int n1,n2,i;
    printf("enter 2 numbers");
    scanf("%d %d",&n1,&n2);
    for (i=n1;i<=n2;i++)
    {
        if (i%2==0)
        {
            printf("Number: %d, Square: %d\n", i, i * i);
        }
        else
        {
            printf("Number: %d, Cube: %d\n", i, i * i * i);
        }
    }
}