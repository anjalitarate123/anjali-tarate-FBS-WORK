#include <stdio.h>
int stringLength(char *str) {
    int count = 0;
    while(str[count] != '\0') {
        count++;
    }
    return count ;
}

int main() {
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    len1 = stringLength(str1);
    len2 = stringLength(str2);

    if(len1 > len2) {
        printf("Larger string is: %s\n", str1);
    } else if(len2 > len1) {
        printf("Larger string is: %s\n", str2);
    } else {
        printf("Both strings are of equal length.\n");
    }

}