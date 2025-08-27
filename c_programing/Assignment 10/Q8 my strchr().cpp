#include <stdio.h>
char* mystrchr(const char *str, char ch) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            return (char *)&str[i];  
        }
        i++;
    }

    return NULL; 
}

int main() {
    char str[100], ch;
    char *result;

    printf("Enter a string: ");
    gets(str);  

    printf("Enter a character to find: ");
    scanf(" %c", &ch);

    result = mystrchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
        printf("Substring from found character: %s\n", result);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    
}