#include <stdio.h>
#include <string.h>
int main()
 {
    char str[100], newStr[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (i % 2 == 0)
		 {
            newStr[j++] = str[i];
        }
    }

    newStr[j] = '\0';  
    printf("String after removing odd index characters: %s\n", newStr);
}