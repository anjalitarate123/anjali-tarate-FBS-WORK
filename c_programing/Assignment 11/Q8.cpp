#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[200];
    int i, wordCount = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (!isspace(str[i]) && inWord == 0) 
		{
            inWord = 1;        
            wordCount++;       
        } else if (isspace(str[i]))
		 {
            inWord = 0;        
        }
    }

    printf("Number of words in the string: %d\n", wordCount);
}