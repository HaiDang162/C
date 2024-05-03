#include <stdio.h>
#include <stdlib.h>

// Viết hàm nhận vào start end, tìm sumPrime trong đoạn start end đó
int isPrime(int n);
int sumPrime(int n);
int countPrime(int n);
int main(int argc, char *argv[]) {
	int n;
	printf("sum is : %d\n", sumPrime(n));
	printf("have is %d prime\n", countPrime(n));
	return 0;
}
int isPrime(int n) {
	if (n <= 1)
	return 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
		return 0;
	}
	return 1;
}
int sumPrime(int n) {
	int start, end, sum = 0;
	scanf("%d%d", &start, &end);
	if (start > end) {
		int temp = start;
		start = end;
		end = temp;
	}
	for (int i = start; i <= end; i++) {
		if (isPrime(i)) {
			sum += i;
		}
	}
	return sum;
}
int countPrime(int n) {
	int start, end, count = 0;
	scanf("%d%d", &start, &end);
	if (start >  end) {
		int temp = start;
		start = end;
		end = temp;
	}
	for (int i = start; i <= end; i++) {
		if (isPrime(i)) {
			count++;
		}
	}
	return count;
}
	
// 3 5 