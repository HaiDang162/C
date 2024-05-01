#include <stdio.h>
#include <stdlib.h>

// viết hàm nhận vào n, tính n giai thừa
int factorial(int n);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	printf("%d", factorial(n));
	return 0;
}
int factorial(int n) {
	int facto = 1;
	for (int i = 1; i <= n; i++) {
		facto *= i;
	}
	return facto;
}