#include <stdio.h>
int main(){
	int a,b;
	printf("enter the first number (a):");
	scanf("%d",&a);
	printf("enter the second number (b):");
	scanf("%d",&b);
	int sum = a+b;
	printf("sum of %d and %d is: %d\n", a, b, sum);
	return 0;
}
