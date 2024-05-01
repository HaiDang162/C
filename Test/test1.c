#include <stdio.h>
#include <stdlib.h>

// viết hàm nhận vào start và end 
// tính tổng các phần tử trong đoạn 
// dùng hàm có kết quả in ra màn hình
int receive(int a, int b);
int main(int argc, char *argv[]) {
	int a, b;
	printf("Input a: \n");
	scanf("%d", &a);
	printf("Input b: \n");
	scanf("%d", &b);
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;	
	}
	printf("%d", receive(a, b));
	return 0;
}
int receive(int a, int b) {
	
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}