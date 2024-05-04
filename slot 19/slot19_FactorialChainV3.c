#include <stdio.h>
#include <stdlib.h>

// in ra tong cua cac giai thua
int getFactorial(int n);
int main(int argc, char *argv[]) {
	int n, sum = 0;
	printf("Input n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += getFactorial(i);
	}
	printf("Sum of factorial chain from 1! to %d! = %d\n", n, sum);
	return 0;
}
int getFactorial(int n) {
	int acc = 1;
	if (n == 0 || n == 1)
		return 1;
	for (int i = 2; i <= n; i++)
		acc *= i;
	return acc;
}