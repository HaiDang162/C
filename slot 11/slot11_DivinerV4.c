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
	
	scanf("%c", &fL); 
	fL = toupper(fL); 
	switch (fL)
	{
		case 'A':
			printf("Dua cot khong phai la so truong cua ban ...\n");
			break;		
		case 'B':
			printf("Ban nang gioi tinh rat tu nhien...\n");
			break;	
		case 'C':
			printf("Tinh cam cua ban gan gui, than mat...\n");
			break;
		case 'D':
			printf("Tinh cam cua ban nong nan, manh liet\n");
			break;	
		default:
			printf("Coming soon...\n");
	}
	return 0;
}