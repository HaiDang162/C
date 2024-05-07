#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10];
	int min, max;
	printf("Input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ", i + 1);
		scanf("%d", &a[i]);
	}
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	
	min = a[0];
	max = a[0];
	for (int i = 1; i < 10; i++) {
		if (a[i] < min) {
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("\nThe min value of this array is %d\n", min);
	printf("The max value of this array is %d\n", max);
	int sumOdd = 0, sumEven = 0;
	for (int i = 1; i < 10; i++) {
		if (a[i] % 2 == 0) {
			sumEven += a[i];
		} else {
			sumOdd += a[i];
		}
	}
	printf("Sum of Odd numbers in array : %d\n", sumOdd);
	printf("Sum of Even numbers in array : %d\n", sumEven);
	return 0;
}