#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char fL;
	printf("Welcome to MSI diviner.\n");
	printf("You are required to input the 1st letter in your first name.\n");
	printf("Then I will show you your destiny/fate\n");
	printf("Input your char: ");
	scanf("%c", &fL);
	// co dc ten chi 1 ki tu
	// fL = 'A' ... 'Z'
	if (fL == 'A')
		printf("Du a cot khong phat la so truong cua ban ...\n");
	if (fL == 'B')
		printf("Ban nang gioi tinh rat tu nhien...\n");
	if (fL == 'C')
		printf("Tinh cam cua ban gan gui, than mat...\n");
	return 0;
}