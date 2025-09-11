//take 5 numbers from a user and arrange in asc and desc order//

#include <stdio.h>
int main()
{
    int i,j,a[5],temp;
    for (i=0;i<5;i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
    }
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4 - i; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Ascending order:");
    for (i = 0; i < 5; i++) 
    {
        printf("%d",a[i]);
    }

    printf("Descending order:");
    for (i=4;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}