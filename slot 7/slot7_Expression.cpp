#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = 10, b = 3;
	int result = a - b;
	printf("a = %d\nb= %d\n", a, b);
	printf("result = %d\n", result);
	// phep nhan chia
	result = a * b;
	printf("result = %d\n", result);
	result = a / b; //CHIA NGUYEN
	printf("result = %d\n", result);
	
	float r = a / b;
	printf("r = %.2f\n", r);
	float re = a * 1.0 / b;
	printf("re = %f\n", re);
	
	int n = 10;
	// 1. n dang bang may
	printf("n = %d\n", n);
	// 2. nha n o dau?
	printf("n addr %u\n", &n);
	// 3. tang n len 1 don vi
	n = 11;
	printf("#1 increasing by 1: n = %d\n", n);
	return 0;	
}