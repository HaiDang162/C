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
	int choice, n;
	do
	{
	printf("---------------------------------------------------\n");
	printf("Welcome to Dang Program\n");
	printf("Please choose the following functions to use with\n");
	printf("1. Check reversed number\n");
	printf("2. Check is Prime\n");
	printf("3. Check number Even or Odd\n");
	printf("4. Compute factorial\n");
	printf("5. Check the product of n\n");
	printf("6. Quit\n");
	printf("Choose 1..6\n");
	printf("---------------------------------------------------\n");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("Please input n: \n");
			scanf("%d", &n);
			printf("%d is reversed number of %d\n", isReversed(n), n);
			break;
		case 2:
			printf("Please input n: \n");
			scanf("%d", &n);
			printf("1. Check n is Prime or Not\n");
			printf("2. Check reversed of n is Prime or Not\n");
			printf("---------------------------------------------------\n");
			int choice1;
			scanf("%d", &choice1);
			switch (choice1)
			{
				case 1:
					if (checkPrime(n) == 0)
						printf("%d is not Prime\n", n); 
					else
						printf("%d is Prime", n); 
				break;
				
				case 2:
					if (checkPrime(isReversed(n) == 0))
						printf("%d is not Prime\n", isReversed(n));
					else
						printf("%d is Prime\n", isReversed(n));
				break;
				default:
				printf("Please input 1 or 2\n");
			}
			break;
		case 3:
			printf("Please input n: \n");
			scanf("%d", &n);
			if (n == 0)
				printf("%d is Even\n", n);
			else
				printf("%d is Odd\n", n);
			break;
		case 4:
			printf("Please input n: \n");
			scanf("%d", &n);
			printf("The factorial of %d is %d\n", n, factorial(n));
			break;
		case 5:
			printf("Please input n: \n");
			scanf("%d", &n);
			printf("The product of %d is %d\n", n, checkMul(n));
			break;
		case 6:
			printf("Bye bye, see you next time\n");
			break;
			
		default:
			printf("Please choose 1..6\n");
			printf("---------------------------------------------------\n");
					
	}
	} while (choice != 6);
	
	return 0;
}

int factorial(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++) {
	result *= i;
	}
	return result;
}

int isReversed(int number) {
	int rever = 0;
	while (number > 0) {
		int remainer = number % 10;
		rever = rever * 10 + remainer;
		number /= 10;
	}
	return rever;
}

int checkPrime(int number) {
	if (number < 2)
		return 0;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return 0;
		}
	}
	return 1;
}

//int isPrime(int n) {
//    for(int i = 2; i <= n/2; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return n >= 2;
//}
//
int checkEven(int number) {
	if (number % 2 == 0)
	return 1;
	return 0;
}

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
