#include <stdio.h>
#include <stdlib.h>

/* 2. Viết hàm nhận vào start end, đếm coi có bao nhiêu con prime trong đoạn.  
VD: start = 3, end = 7  
count = 3 */
int ChangeTime(int n);
int findPrime(int start, int end);
int main(int argc, char *argv[]) {
	int n;
	ChangeTime(n);
	return 0;
}
int ChangeTime(int n) {
	int hour, min, sec;
	scanf("%d", &n);
	hour = n / 3600;
	min = (n % 3600) / 60;
	sec = ((n % 3600) % 60) % 60; 
	printf ("%d change to %02d:%02d:%02d", n, hour, min, sec);
	return n;
}
int findPrime(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; i++){
    	int g = 1;
        for (int j = start - 1; j < start; j++) {
            if (i % j == 0 ) { 
				count += 1;
				j = 2;
			}
        }
    }
    return count;
}