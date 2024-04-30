#include <stdio.h>
#include <stdlib.h>

// in ra cac so tu nhien tu 1..n (n > 1)

int main(int argc, char *argv[]) {
	int n;
	printf("I am here to show the list of numbers from 1 to n (>1)\n");
	printf("Please input n > 1: ");
	scanf("%d", &n);
	if (n <= 1)
		printf("Do ku know how to input a number > 1?\n");
	else
	{
		printf("Again, the list of numbers from 1 to %d:\n", n);
		for (int i = 1; i <= n; i++)
		printf("%d ", i);
	}
	
	return 0;
}