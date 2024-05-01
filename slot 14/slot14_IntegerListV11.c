#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int acc = 0;	
	printf("This program will show the sum of 100 first intergers (1..100)\n");
	for (; ;)
	{
		printf("Please input n > 1: ");
		scanf("%d", &n);
		if (n <= 1)
			printf("Do u know how to input an integer > 1 ?\n");
		else
			break;
	}
	
	for (int i = 1; i <= n; i++)
		acc += i;

	printf("The sum is %d\n", acc);
	return 0;
}