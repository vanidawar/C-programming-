#include <stdio.h>
int main() 
{
    char str[100];
    int i, j, flag = 1, len = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') 
    {
        len++;
    }
    j = len - 1;
    for (i = 0; i < j; i++, j--) 
    {
        if (str[i] != str[j]) 
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

}
