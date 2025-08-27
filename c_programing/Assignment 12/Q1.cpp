#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character to search: ");
    scanf(" %c", &ch);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at position %d\n", ch, i);
            found = 1;
        }
    }

    if (!found) {
        printf("Character '%c' not found in the string.\n", ch);

}
}