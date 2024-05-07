#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[] = {1, 6, -1000, 10, 50, 70 , 6, 6, -1, 100};
	int found = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] == 10) {
			found = 1;
			break;
		}
	}
	if (found == 0)
		printf("10 not found!!!");
	else
		printf("10 found!!!\n");
	return 0;
}