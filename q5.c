#include <stdio.h>
int main()
{
    int v1=0,v2=0,v3=0,v4=0,v5=0,cand=0;
    while (cand != 10)
    {
        printf("select candidate(1,2,3,4 or 5) enter 10 to stop:");
        scanf("%d",&cand);
        switch (cand)
        {
        case 1:
            v1++;
            break;
        case 2:
            v2++;
            break;
        case 3:
            v3++;
            break;
        case 4:
            v4++;
            break;
        case 5:
            v5++;
            break;
        case 10:
            printf("Voting ended\n");
            break;
        default:
            printf("Invalid vote");
        }
    }
    printf("candidate1:%d\n",v1);
    printf("candidate2:%d\n",v2);
    printf("candidate3:%d\n",v3);
    printf("candidate4:%d\n",v4);
    printf("candidate5:%d\n",v5);
}
