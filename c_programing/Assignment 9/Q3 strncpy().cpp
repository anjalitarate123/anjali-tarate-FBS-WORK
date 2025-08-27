#include <stdio.h>
#include <string.h>
int main()
 {
    char source[] = "Hello";
    char destination[10];

    strncpy(destination, source, 3);  
    destination[3] = '\0'; 

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
}