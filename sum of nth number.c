#include <stdio.h>
int main() {
int n,i, sum;
printf("Enter a positive integer n: ");
scanf("%d", &n);
sum=0;
for (i = 1; i <= n; i=i+1) {
sum= sum+i;
    }
printf("Sum of nth number is %d",sum);
return 0;
}
