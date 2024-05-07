#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int compareArray(int a[], int b[], int length);
int main(int argc, char *argv[]) {
	int a[] = {1, 1, 3, 5};
	int b[] = {1, 1, 3, 5};
	int length = 0;
	int c = sizeof(a) / sizeof(a[0]);
	int d = sizeof(b) / sizeof(b[0]);
	if (c > d) {
		length += c;
	} else {
		length += d;
	}
	printf("%d\n", a[6]);
	printf("%d", compareArray(a, b, length));
	return 0;
}
int compareArray(int a[], int b[], int length) {
	for (int i = 0; i < length; i++) {
		if(a[i] > b[i]) {
			return 1;
		} else if (a[i] < b[i]) {
			return -1;
		}
	}
	return 0;
}