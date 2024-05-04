#include <stdio.h>
#include <stdlib.h>

/* Viết hàm nhận vào start end, tìm sumPrime trong đoạn start end đó

1. Viết hàm nhận vào start end, tìm sumPrime trong đoạn start end đó  
2. Viết hàm nhận vào start end, đếm coi có bao nhiêu con prime trong đoạn.  
VD: start = 3, end = 7  
count = 3
3. Nhập vào 1 con số, nếu nó và đào ngược cùa nó là con prime thì dừng, còn không thì lặp lại tới chết.
VD: 13 -> 31
	12 -> 21
*/
int reverPrime(int n);
int isPrime(int n);
int sumPrime(int start, int end);
int countPrime(int start, int end);
int main(int argc, char *argv[]) {
	int n, start, end;
	printf("Please input start and end :");
	scanf("%d%d", &start, &end);
	printf("Sum is : %d\n", sumPrime(start, end));
	printf("Have %d Prime\n", countPrime(start, end));
	printf("Please input n. I will find reversed of n\n");
	scanf("%d", &n);
	int rever = reverPrime(n);
//		if (isPrime(n) == isPrime(rever) && isPrime(n) == 1 && isPrime(rever) == 1) {
//			printf("%d and %d is Prime", n, rever);
//		} else {
//			for(; ;) {
//				printf("%d and %d not Prime", n, rever);
//			}
//		}
	if (isPrime(n) == isPrime(rever) && isPrime(n) == 1 && isPrime(rever) == 1) {
				printf("%d and %d is Prime", n, rever);
			} else {
				while (isPrime(rever) == 0) {
					printf("%d and %d not Prime", n, rever);
				}
				
			}
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
int sumPrime(int start, int end) {
	int sum = 0;
	for (int i = start; i <= end; i++) {
		if (isPrime(i)) {
			sum += i;
		}
	}
	return sum;
}
int countPrime(int start, int end) {
	int count = 0;
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
int reverPrime(int n) {	
	int rever = 0;
	while (n > 0) {
		int remainer = n % 10;
		rever = rever * 10 + remainer;
		n /= 10;
	}		
	return rever;
}
	
// 3 5 