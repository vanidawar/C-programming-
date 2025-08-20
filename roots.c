#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,root1,root2;
    printf("enter coefficients:a,b,c (ax^2+bx+c=0)");
    scanf("%f %f %f",&a,&b, &c);

    d=b*b-4*a*c;

    if (d>0)
    {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("roots are real and distinct");
        printf("root1=%.2f and root2=%.2f",root1,root2);
    }
    else if (d==0)
    {
        root1= -b / (2*a);
        printf("roots are real and equal");
        printf("root1=root2=%.2f",root1);
    }
    else if (d<0)
    {
        float real= -b/(2*a);
        float imgn= sqrt(-d) / (2*a);
        printf("roots are imaginary");
        printf("real part=%.2f and imaginary part=%.2f",real,imgn);
    }
}