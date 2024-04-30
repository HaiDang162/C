#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int yob, age;
	printf("Your year of birth is %d\n", yob);
	
	printf("Please input your yob: ");
	scanf("%d",&yob);
	age = 2022 - yob;
	printf("As I guess, you are %d years old\n", age);
	return 0;
}