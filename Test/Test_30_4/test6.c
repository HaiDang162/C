#include <stdio.h>
#include <stdlib.h>

// viết hàm nhận vào n, tính tổng các số chẵn từ 1 đến n
int sum(int n);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return 0;
}
int sum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0)
			sum += i;
	}
	return sum;
}