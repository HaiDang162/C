#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
	// Slot 5
	int yob = 1234;
	int grade = 10;
	
	printf("Your yob: %d",yob);
	printf("\nYour grade: %d",grade);
	// Print reversedNum
	int num = 1234;
	int rever = 0;
	while (num > 0) {
		int digit = num % 10;
		rever = rever * 10 + digit;
		num /= 10;
	}
	printf("\nreversedNum: %d",rever);
	 
	int age = 2022 - yob;
	printf("\nAs I guess, you are %d years old", age);
	// hardcode vi khong lay nam sinh, va thoi gian trong dong ho
	return 0; 
}