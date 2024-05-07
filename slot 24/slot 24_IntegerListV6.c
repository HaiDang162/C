#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n[10];
	int evenCount = 0, sumOdd = 0;
	
	printf("Please input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ",(i + 1));
		scanf("%d", &n[i]);
	}
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", n[i]);
	printf("\n");
	
	// quest mảng, cùng lúc làm nhiều việc, đếm số chẵn, tính tổng lẻ, ...
	// mỗi lần quét mảng, là ta có value biến [i]
	// ta có quyền làm gì với value [i] biến [i] này mà
	for (int i = 0; i < 10; i++) {
		if (n[i] % 2 == 0)
			evenCount++;
		else 
			sumOdd += n[i];
	}
	printf("There is/are %d even number(s) in this array\n", evenCount);
	printf("The sum of odd number(s) in this array is: %d\n", sumOdd);
	return 0;
}