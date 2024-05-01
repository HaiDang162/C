#include <stdio.h>
#include <stdlib.h>

// tim 2 so min and max

int main(int argc, char *argv[]) {
	int a, b;
	printf("This program will show the maximun value of two numbers\n");
	printf("Please input two number: ");
	scanf("%d%d", &a, &b);
	if (a > b) {
		printf("%d is max\n%d is min", a, b);
	} 
	else if (a == b)
		printf("You have just input two equal number. They are %d\n", a);
	else
		printf("%d is max\n%d is min", b, a);
	return 0;
}