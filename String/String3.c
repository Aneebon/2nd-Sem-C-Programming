#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0'; // Remove newline
    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    return 0;
}