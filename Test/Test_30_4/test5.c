#include <stdio.h>
#include <stdlib.h>

// hàm nhận vào n, return số fibonacci thứ n 1 1 2 3 5 8 13 21
int fibonacci(int n);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	printf("%d", fibonacci(n));
	return 0;
}
int fibonacci(int n) {
	int a = 0;
	int b = 1;
	int result;
	for (int i = 2; i <= n; i++) {
		result = a + b;
		a = b;
		b = result;
	}
	return result;
}