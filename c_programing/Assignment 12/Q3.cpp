#include <stdio.h>
#include <string.h>
void removeNthChar(char *str, int n) {
    int len = strlen(str);

    if(n < 0 || n >= len) {
        printf("Invalid index!\n");
        return;
    }

    for(int i = n; i < len; i++) {
        str[i] = str[i + 1]; 
    }
}

int main() {
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the index to remove: ");
    scanf("%d", &n);

    removeNthChar(str, n);

    printf("String after removing character at index %d: %s\n", n, str);

}