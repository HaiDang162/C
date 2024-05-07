#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[] = {-5, 10, 100, -50, 1000, 1, 2, -50, 1001, 1};
	int min, max;
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
	printf("The min value of this array is: %d\n", min);
	printf("The max value of this array is: %d\n", max);
	return 0;
}