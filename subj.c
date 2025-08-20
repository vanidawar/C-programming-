#include <stdio.h>
int main()
{
    int math,phy,chem,eng,cs;
    printf("input marks for 5 subjects");
    scanf("%d %d %d %d %d",&math, &phy, &chem, &eng, &cs);
    int percent=((math+phy+chem+eng+cs)/5);
    if (percent>85)
    {
        printf("your grade is O");
    }
    else if (percent>75)
    {
        printf("your grade is A");
    }
    else if (percent>60)
    {
        printf("your grade is B");
    }
    else if (percent>40)
    {
        printf("your grade is C");
    }
    else if (percent>35)
    {
        printf("your grade is D");
    }
    else if (percent<35)
    {
        printf("your grade is F");
    }
}