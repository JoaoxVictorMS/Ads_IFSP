#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("non_existent_file.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
    }
    
    // Resto do código    
    fclose(file);
    return 0;
}

