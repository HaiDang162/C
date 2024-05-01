#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int checkNumber(int n);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	printf(checkNumber(n));
	return 0;
}
int checkNumber(int n) {
	for (int i = 1; i <= n; i++)
		if (i % 2 != 0)
			printf("%d ", i);
	return 0;
}