#include <stdio.h>
#include <string.h>
int main() 
{
    char destination[50] = "Good ";
    char source[] = "Morning Everyone!";

    strncat(destination, source, 7); 

    printf("Result: %s\n", destination);

}