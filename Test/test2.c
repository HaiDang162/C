#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int checkNumber(int n);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	printf("%d", checkNumber(n));
	return 0;
}
int checkNumber(int n) {
	if (n % 2 == 0)
		return 1;
		return 0;
}