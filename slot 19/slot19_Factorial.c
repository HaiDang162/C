#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int getFactorialV4(int n);
int getFactorialVWrong(int n);
int main(int argc, char *argv[]) {
//	printf("0! = %d\n", getFactorialV4(0));
	printf("%d", getFactorialV4(5));
	return 0;
}

int getFactorialVWrong(int n) {
	int acc = 1;
	if (n == 0 || n == 1)
		acc = 1;
		printf("CPU is still here, of n >= 2!!!\n");
		return 1;
	for (int i = 2; i <= n; i++)
		acc *= i;	
//	return acc; do ham ko return thi phai in ra !!!
	return acc;
}
int getFactorialV4(int n) {
	int acc = 1;
	if (n == 0 || n == 1) {
		return 1;
	}
	for (int i = 2; i <= n; i++) {
		acc = acc * i;
	}
	return acc;
}