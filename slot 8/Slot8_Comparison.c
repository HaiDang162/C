#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// 1. 5 > 6 dung ko ?
	int result = 5 > 6;
	printf("5 > 6? %d\n", result);
	
	//2. 5 < 6 dung ko ?
	result = 5 < 6;
	printf("5 < 6? %d\n", result);
	
	//3. 6 > 6 dung ko ?
	result = 6 > 6;
	printf("6 > 6? %d\n", result);
	
	//4. 6 >= 6 dung ko ?
	result = 6 >= 6;
	printf("6 >= 6? %d\n", result);
	
	//5. 100 bang 8 dung khong ?
	result = 100 == 8;
	printf("100 = 8? %d\n", result);
	
	//6. 100 bang 100 dung khong ?
	result = 100 == 100;
	printf("100 = 100? %d\n", result);
	
	//7. 100 khac 100 dung khong ?
	result = 100 != 100;
	printf("100 <> 8? %d\n", result);
	//8. cho 2 so a = 10, b = 3. hoi a > b dung ko ?
	int a = 10, b = 3;
	result = a > b;
	printf("a > b? %d\n", result);
	
	//9. Cho tuoi cua ban la con so nguyen nao do
	// neu tuoi < 20 chao kid
	// neu tuoi >= 20 chao nguoi truong thanh
	int age = 18;
	if (age >= 20)
		printf("Hey, chao nguoi truong thanh\n");
	if (age < 20)
		printf("Hey, rich kid!\n");
	
	return 0;
}