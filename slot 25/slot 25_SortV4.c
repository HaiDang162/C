#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// i = a, j = b
int main(int argc, char *argv[]) {
	int a[] = {5, -10, -15, -20, -25};
	int size = 5;
	int tmp;
	printf("The array before soring\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) { // tìm thằng nhỏ nhất 1 lượt chốt
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("\nThe array after soring\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}