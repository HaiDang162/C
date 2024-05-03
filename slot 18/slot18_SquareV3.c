#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fV3();
int main(int argc, char *argv[]) {
	printf("The result is %d",fV3());
	return 0;
}

int fV3() {
	int x, y;
	printf("Input an integer to get ^2: ");
	scanf("%d", &x);
	y = x * x;
	return y;
}