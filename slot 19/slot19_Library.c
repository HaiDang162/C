#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Sqrt of %d is %.2lf\n", 100, sqrt(100));
	double sum = sqrt(9) + sqrt(25) + sqrt(64);
	printf("Sum is: %.2lf\n", sum);
	int r = abs(-5);
	printf("Tri tuyet doi cua %d is %d\n", -5, r);
	return 0;
}