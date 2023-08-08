#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


char * reverse( char * s )
{
    int tamanho = strlen(s) ;
    int c, i, j;

    for (i = 0, j = tamanho - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    return s;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    char str[] = "Olá Mundo!";

    printf("%s\n", reverse(str) );

    return 0;
}
