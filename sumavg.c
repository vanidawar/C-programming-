#include <stdio.h>
int main()
{
    int i,count=0;
    float sum=0;
    for (i=1;count<15;i++)
    {
        if (i%2 !=0)
        {
            sum=sum+i;
            count++;
        }
    }
float avg=sum/15.0;
printf("Sum of first 15 odd numbers = %f", sum);
printf("Average = %f", avg);

}