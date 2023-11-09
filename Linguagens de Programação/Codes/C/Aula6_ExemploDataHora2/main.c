#include <stdio.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	struct tm *ptr;
	time_t lt;
	lt = time(NULL);
	ptr = localtime(&lt);
	printf(asctime(ptr));
}


