#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = 10, b = 3; // 8 byte trong RAM da duoc cap
	
	printf("a = %d; b = %d\n", a, b);
	printf("addr of a: %u; addr of b: %u\n", &a, &b);
	
	// so thuc
	double c = 0.1, d = 3.14;
	printf("c= %.1lf; d = %.3lf\n", c, d);
	printf("addr of c: %u; addr of d: %u\n", &c, &d);
	//*********
	printf("the number of bytes allocated of an int: %d\n", sizeof(int));
	int size = sizeof(int);
	printf("the number of bytes allocated of an int: %d\n", size);
	printf("the number of bytes allocated of an float: %d\n", sizeof(float));
	printf("the number of bytes allocated of an double: %d\n", sizeof(double));
	
	// Long, so nguyen bu cha ba
	int m = -2100000000;	// %d
	long money = 3000000000L; // %ld
	printf("The amount 1: %d\n", m);
	printf("The amount 2: %ld\n", money);
	return 0;
}