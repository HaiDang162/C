#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int yob, age;
	char fL;
	printf("Your are reqyured to input your profile\n");
	
	printf("1st, input 1st letter in your first name: ");
	scanf("%c", &fL);
	
	printf("2nd, input your yob: ");
	scanf("%d", &yob);
	age = 2022 - yob;
	
	printf("Your profile is: \n");
	printf("Your yob: %d\n", yob);
	printf("Your age: %d\n", age);
	printf("Your name (brief): %c\n", fL);
	
	// nhap vao tu ban phim 2 con so nguyen x, y. Sau do in ra tong
	int x, y;
	
	printf("You are required to input two integers\n");
//	scanf("%d", &x);
//	scanf("%d", &y);
	scanf("%d%d", &x, &y);
	
	printf("The sum of %d and %d is %d\n", x ,y, (x + y));
	// lam bieng tao bien trung gina sum = x + y
	// cung 1 value ta in luon
	return 0;
}