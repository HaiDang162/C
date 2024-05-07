#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[] = {-5, -10, 100, -50, 100, -1001, 1};
	for (int i = 1; i < 7; i++) {
		if (a[0] > a[i]) {
			int tmp = a[0];
			a[0] = a[i];
			a[i] = tmp;
		}
	}
	printf("After swapping, the array now is\n");
	for(int i = 0; i < 7; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}