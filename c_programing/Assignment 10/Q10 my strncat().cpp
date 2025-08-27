#include <stdio.h>
void mystrncat(char *dest, const char *src, int n) 
{
    int i = 0, j = 0;

    while (dest[i] != '\0')
	 {
        i++;
    }

    while (j < n && src[j] != '\0') 
	{
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

int main() 
{
    char str1[100], str2[50];
    int n;

    printf("Enter the destination string: ");
    gets(str1);

    printf("Enter the source string: ");
    gets(str2);

    printf("Enter number of characters to append: ");
    scanf("%d", &n);

    mystrncat(str1, str2, n);

    printf("Resulting string after concatenation: %s\n", str1);

}