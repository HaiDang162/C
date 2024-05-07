#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int yob = 2002;
void printYob();
void printLatestYob();
void seeNothing();
int main(int argc, char *argv[]) {
	seeNothing();
	printf("in main(), your yob is: %d\n", yob);
	return 0;
}

void seeNothing() {
//	int yob = 2010;
	printf("in seeNothing(), your yob is : %d\n", yob);
}

void printYob() {
//	int age = 2022 - yob;
//	printf("Your age is: %d\n", age);
}

void printLatestYob() {
//	int age;
//	printf("Your age is: %d\n", age);

}