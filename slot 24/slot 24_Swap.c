#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 23;
	int b = 100;
	
	printf("Before swapping, a = %d; b = %d \n", a, b);
	int tmp = a;
	a = b;
	b = tmp;
	printf("After swapping, a = %d; b = %d \n", a, b);
	return 0;
}