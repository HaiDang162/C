#include <stdio.h>
#include <stdlib.h>

// in ra tong cua cac giai thua
int main(int argc, char *argv[]) {
	int sum = 0;
	for (int i = 1; i <= 5; i++) {
		sum += getFactorial(i);
	}
	printf("Sum of factorial chain from 1! to 5! = %d\n", sum);
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