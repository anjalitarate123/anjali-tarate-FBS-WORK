#include <stdio.h>
void replaceSpaces(char *str, char symbol) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = symbol;
        }
    }
}

int main() {
    char str[100];
    char symbol;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  
    printf("Enter the symbol to replace spaces: ");
    scanf(" %c", &symbol);

    replaceSpaces(str, symbol);

    printf("Modified string: %s\n", str);

}