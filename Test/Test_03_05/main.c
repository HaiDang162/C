#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ChangeTime(int n);
int main(int argc, char *argv[]) {
	int n;
	ChangeTime(n);
	return 0;
}
int ChangeTime(int n) {
	int h, m, s;
	scanf("%d", &n);
	hour = n / 3600;
	min = (n % 3600) / 60;
	sec = ((n % 3600) % 60) % 60; 
	printf ("%d change to %02d:%02d:%02d", n, hour, min, sec);
	return n;
}