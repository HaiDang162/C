#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char fL;
	printf("Welcome to MSI diviner.\n");
	printf("You are required to input the 1st letter in your first name.\n");
	printf("Then I will show you your destiny/fate\n");
	printf("Input your char: ");
	
	scanf("%c", &fL); // neu go HOA, khong care if tiep kq
					  // neu go thuong, thi doi Hoa da, if nhu bt
					  // if (thuong) - 32 ve hoa
	fL = tolower(fL); // y = f(x) = x^2
					  // y = f(2) = 2^2 = 4, ham function
					  // la quy tac bien doi 

	if (fL == 'a')
		printf("Du a cot khong phat la so truong cua ban ...\n");
	if (fL == 'b')
		printf("Ban nang gioi tinh rat tu nhien...\n");
	if (fL == 'c')
		printf("Tinh cam cua ban gan gui, than mat...\n");		
	return 0;
}