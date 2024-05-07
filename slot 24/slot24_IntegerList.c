#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i; 
	int a[] = {5, 6, -1000, 100, 50, 70, 6, 6, -1, 10};
	for (i = 0; i < 10; i++) {
		if (a[i] == 10)
			printf("Hey, found 10 at position of %d\n", i);
			printf("Hey, 10 not found in the array!!!\n"); 
	}
	return 0;
}
