#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[] = {0, 10, 100, -50, 100, -1001, 1};
	int min = a[0];
	int pos = 0; // mặc định nhỏ nhất là thằng đầu tiên
	int tmp;
	for (int i = 1; i < 7; i++) {
		if (a[i] < min) {
			min = a[i];
			pos = i;
		}
	}
	if (pos > 0) { // min nằm ở lưng chừng mảng
		tmp = a[0];
		a[0] = a[pos];
		a[pos] = tmp;
	}
	printf("After swapping, the array now is\n");
	for(int i = 0; i < 7; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}