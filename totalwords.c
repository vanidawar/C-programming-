#include <stdio.h>
int main()
{
    char str[100];
    int i, words = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n') 
        {
            words++;
        }
    }
    printf("Total words = %d", words);
}
