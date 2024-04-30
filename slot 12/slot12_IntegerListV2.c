#include <stdio.h>
#include <stdlib.h>

// viet app nho nho in ra cac so chan tu 1..100

int main(int argc, char *argv[]) {
	printf("The list of even numbers from 1..100\n");
	for ( int i = 1; i <= 100; i++) 
		if (i % 2 == 0)
			printf("%d\t ", i);
	return 0;
}