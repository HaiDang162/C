#include <stdio.h>
#include <stdlib.h>

// in ra tong cua cac giai thua
int main(int argc, char *argv[]) {
	printf("0! = %d\n", getFactorial(0));
	printf("5! = %d\n", getFactorial(5));
	int sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
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