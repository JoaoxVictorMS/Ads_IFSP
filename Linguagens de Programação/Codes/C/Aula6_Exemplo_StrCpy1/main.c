#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20]; // Certifique-se de que a string de destino tenha espaço suficiente
    
    strcpy(destination, source);
    
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    
    return 0;
}

