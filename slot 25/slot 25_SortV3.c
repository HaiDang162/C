#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[] = {4, 3, 2, 1, 0};
	int tmp;
	printf("Before sorting, the array is\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 1; i < 5; i++) {
		if (a[0] > a[i]) {
			tmp = a[0];
			a[0] = a[i];
			a[i] = tmp;
		}
	}
	for (int i = 2; i < 5; i++) {
		if (a[1] > a[i]) {
			tmp = a[1];
			a[1] = a[i];
			a[i] = tmp;
		}
	}
	for (int i = 3; i < 5; i++) {
		if (a[2] > a[i]) {
			tmp = a[2];
			a[2] = a[i];
			a[i] = tmp;
		}
	}
	for (int i = 4; i < 5; i++) {
		if (a[3] > a[i]) {
			tmp = a[3];
			a[3] = a[i];
			a[i] = tmp;
		}
	}
	printf("The array after sorting is\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}