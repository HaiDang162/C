#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// check age co la thanh xuoa hay khong
	int age = 39;
	if (age >= 20 && age <= 30)
		printf("Chao thanh xuan\n");
	else
		printf("You are too old or too young\n");
		
		// viet doan code moi nhap vao 1 con so nguyen bat ki
		// sau do in ra thong bao rang con so nay co nam ngoai mien
		//doan [1..100] hay khong
		//vi du goi con so can nhap la x
		// go x = --5 -> ngoai doan [1..100]
		// go x = 101 -> ngoai doan
		// go x = 50 -> trong doan
	int x;
	printf("Input an integer. I will check if this number is in the range of [1..100] or not\n");
	printf("Input an integer: ");
	scanf("%d", &x);
	
	int result ; // ngoai mien
	// 			   .... 0 1 2 3 4 ........ 100, 101, 102, ,,,,
	//					x 						x
	result = x < 1 || x > 100;
	printf("range result: %d\n", result);
	
	if (x < 1 || x > 100)
		printf("Number %d is out the range of [1..100]\n", x);
	else
		printf("Number %d is in the range of [1..100]\n", x);
	return 0;
}