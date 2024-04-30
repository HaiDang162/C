#include <stdio.h>
#include <stdlib.h>

// viet app nho nho nhap chu cai dau trong ten cua ban - nhap chu hoa

int main(int argc, char *argv[]) {
	
	char fL;
	printf("Input the 1st letter of your first name: ");
	scanf("%c", &fL);
	printf("You have just input the character: %c\n", fL);
	fL += 32;
	printf("And it is converter to lower case as: %c\n", fL);
	return 0;
}