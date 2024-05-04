#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fV4(int x);
int main(int argc, char *argv[]) {
//	int result = fV4(5);
//	printf("result = %d", result);
//	printf("result = %d", fV4(5));
	int n;
	printf("input a number to get ^2: ");
	scanf("%d", &n);
	printf("result: %d\n", fV4(n));
	return 0;
}
int fV4(int x) {
//	int y = x * x;
	return x * x;
}