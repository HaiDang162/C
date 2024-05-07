#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c[10];
	int i; 
	printf("Please input 10 grades of the C class: (1..10):\n");
	for (i = 0; i < 10; i++) {
		printf("Input grade[%d]: ", (i + 1));
		scanf("%f", &c[i]); 
	} 
	
	printf("Here is your grades\n");
	for (i = 0; i <10; i++) {
		printf("%.2f\t", c[i]);
	}
	return 0;
}
