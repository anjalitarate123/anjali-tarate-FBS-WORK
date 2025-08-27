#include <stdio.h>
int myStrcmp(const char *str1, const char *str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    int result = myStrcmp(s1, s2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result > 0)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");

    return 0;
}