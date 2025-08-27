#include <stdio.h>
#include <string.h>
void swapFirstLast(char *str) {
    int len = strlen(str);

    if(len > 1) {
        char temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  
    swapFirstLast(str);
   printf("New string after swapping first and last character: %s\n", str);

}