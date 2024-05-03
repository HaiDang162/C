#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fV1(int x);
int main(int argc, char *argv[]) {
	int x;
	printf("Please input an integer to get ^2\n");
	scanf("%d", &x);
	int result = fV1(x);
	printf("result is: %d", result);
	return 0;
}

int fV1(int x)
{	
	return x * x;
}
