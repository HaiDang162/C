#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	float c[10] = {1, 1, 2, 3, 5, 8}; 
	printf("Your ten grades\n");
	for (i = 0; i < 10; i++) {
		printf("Grade [%d] = %.2f\n", i, c[i]); 
	}
	float col[] = {2, 4, 6, 8, 10};
	for (i = 0; i < 10; i++) {
		printf("\nGrade [%d] = %.2f\t", i, col[i]);
	}
	return 0;
}
