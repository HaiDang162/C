#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n[10];
	int pos = -1;
	printf("Please input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ",(i + 1));
		scanf("%d", &n[i]);
	}
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", n[i]);
	}
	printf("\n");
	for ( int i = 0; i < 10; i++) {
		if (n[i] == 10) {
			pos = i;
			break;
		}
	}

	if (pos == -1)
		printf("10 not found\n");
	else
		printf("10 fount at the position of %d\n", (pos + 1));	
	return 0;
}