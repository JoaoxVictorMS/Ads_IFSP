#include <stdio.h>

int main() {
    int i = 1;

    loop_start: // Etiqueta
    printf("Número: %d\n", i);
    i++;

    if (i <= 5) {
        goto loop_start; // Vai para a etiqueta loop_start
    }

    return 0;
}

