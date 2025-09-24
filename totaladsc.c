#include <stdio.h>
int main() 
{
    char str[200];
    int i, alpha = 0, digits = 0, spcl= 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alpha++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (str[i] != ' ' && str[i] != '\n')
        {
            spcl++;
        }
    }

    printf("Alphabets = %d Digits = %d Special = %d\n", alpha, digits, spcl);
}
