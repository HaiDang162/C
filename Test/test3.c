#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int SumOfN(int n);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	printf("%d", SumOfN(n));
	return 0;
}
int SumOfN(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}