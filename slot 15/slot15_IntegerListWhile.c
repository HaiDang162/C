#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	printf("This program will show the list of 100 first integers (FOR):\n");
//	for (int i = 1; i <= 100; i++)
//		printf("%d ", i);
	printf("-----\n");
	int count = 1;
//	printf("\n");
	
	for (; ;)
	{	
		printf("%d\t", count);
		count++;
		if (count == 101)
//			printf("%d", count);
			break;		
	}
	
	printf("\n");
//	count = 1;
	
	do
	{	
		printf("%d ", count);
		count++;
	} while (count < 100);
	printf("\n%d", count);
	return 0;	 
}
