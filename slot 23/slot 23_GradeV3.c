#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c[10];
	int i; 
//	printf("The address of c[0] is %u\n", &c[0]);
//	printf("The address of c[1] is %u\n", &c[1]);
//	printf("The address of c[2] is %u\n", &c[2]);
//	printf("The address of c[3] is %u\n", &c[3]);
//	printf("The address of c[4] is %u\n", &c[4]);
	printf("The address of all of elements in the array:\n");
	for (i = 0; i < 10; i++) {
		printf("The address of c[%d] is %u\n", i, &c[i]);		 
	}
	printf("The value of c is %u\n", c);  
	return 0;
}
