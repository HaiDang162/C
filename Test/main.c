#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int checkPrime(int n);
int factorial(int n);
int isReversed(int n);
int isPrime(int n);
int checkEven();
int checkMul(int n);
int main(int argc, char *argv[]) {
	int n;
	printf("Please input n: \n");
	scanf("%d", &n);
//	int reversed = isReversed(n);
//	printf("%d", isReversed(n));
//	printf("\n%d", checkPrime(isReversed(n)));
//	int checkPrime = isPrime(reversedNum(n));
//	printf("%d", checkPrime);
//	printf("\n%d", checkEven(n));
	printf("%d", checkMul(n));
	return 0;
}

//int factorial(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i++) {
//	result *= i;
//	}
//	printf("%d", result);
//}
//
//int isReversed(int number) {
//	int rever = 0;
//	while (number > 0) {
//		int remainer = number % 10;
//		rever = rever * 10 + remainer;
//		number /= 10;
//	}
//	return rever;
//}
//
//int checkPrime(int number) {
//	if (number < 2)
//		return 0;
//	for (int i = 2; i < number; i++) {
//		if (number % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}

//int isPrime(int n) {
//    for(int i = 2; i <= n/2; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return n >= 2;
//}
//
//int checkEven(int number) {
//	if (number % 2 == 0)
//	return 1;
//	return 0;
//}

int checkMul(int n) {
	int multi = 1;
	while (n > 0) {
		int rever = n % 10;
		multi *= rever;
		n /= 10;
	}
	return multi;
}
// object, array, pointer tham chieu tro den địa chỉ của nó