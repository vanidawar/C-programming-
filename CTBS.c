//Tusharika,Vani and Rohini//

#include <stdio.h>
int main()
{
    int nt, s, i;
    float cost = 0, bill = 0;
    printf("Enter how many tickets to book:\n");
    scanf("%d", &nt);
    for (i = 1; i <= nt; i++)
    {
        printf("Select seat:\n1. Premium seat - 200\n2. Standard seat - 150\n3. Economy seat - 100\n4. Exit\n");
        scanf("%d", &s);
        switch (s)
        {
            case 1:
                cost += 200;
                break;
            case 2:
                cost += 150;
                break;
            case 3:
                cost += 100;
                break;
            case 4:
                nt = i - 1;
                i = nt;
                break;
            default:
                printf("Invalid input\n");
                i--;
                break;
        }
    }
    printf("\nTotal tickets booked: %d\n", nt);
    if (nt >= 5)
    {
        bill = cost - (cost * 0.05);
        printf("Total bill after discount: %f\n", bill);
    }
    else
    {
        printf("Total bill: %f\n", cost);
    }
}
