#include <stdio.h>
char* mystrrchr(const char *str, char ch) {
    const char *last = NULL;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            last = &str[i];  
        }
        i++;
    }

    return (char *)last;  
}

int main() {
    char str[100], ch;
    char *result;

    printf("Enter a string: ");
    gets(str);  

    printf("Enter a character to find: ");
    scanf(" %c", &ch);

    result = mystrrchr(str, ch);

    if (result != NULL) {
        printf("Last occurrence of '%c' found at position: %ld\n", ch, result - str);
        printf("Substring from last occurrence: %s\n", result);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }
}