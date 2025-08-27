#include <stdio.h>
#include <string.h>
void removeOddIndexChars(char *str) {
    int i, j = 0;
    int len = strlen(str);
    for(i = 0; i < len; i++) {
        if(i % 2 == 0) {
            str[j++] = str[i];  
        }
    }
    str[j] = '\0';  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  

    removeOddIndexChars(str);

    printf("String after removing odd index characters: %s\n", str);

}