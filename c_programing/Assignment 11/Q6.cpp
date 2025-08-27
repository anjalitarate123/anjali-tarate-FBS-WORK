#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    char symbol;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the special symbol to replace spaces: ");
    scanf(" %c", &symbol);  
    for (int i = 0; str[i] != '\0'; i++)
	 {
        if (str[i] == ' ')
		 {
            str[i] = symbol;
        }
    }

    printf("Modified string: %s\n", str);
}