#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	char firstChar = 'V'; // nhay don de luu 1 ki tu
	char firstChar = 'K';
	printf("The 1st letter in your name is %c\n", firstChar);
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	
	// firstChar = firstChar + 32;
	firstChar += 32;
	
	printf("After converting to lower case...\n");
	printf("The 1st letter in your name now is %c\n", firstChar);
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	return 0;
}