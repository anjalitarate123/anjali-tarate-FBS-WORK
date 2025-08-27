#include <stdio.h>
void mystrcat(char *dest, const char *src)
 {
    while (*dest != '\0') 
	{
        dest++;
    }

    while (*src != '\0') 
	{
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

int main() 
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);  

    printf("Enter the second string: ");
    gets(str2);

    mystrcat(str1, str2);  

    printf("Concatenated string: %s\n", str1);

    return 0;
}