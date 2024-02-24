#include <stdio.h>
int main() {
int n, rem,sum;
sum=0;
printf("Enter the number: ");
scanf("%d", &n);
while(n!=0);{
rem=n%10;
n=n/10;
sum = sum+rem;
}
printf("the sum of digit of number is %d",sum);
return 0;
}
