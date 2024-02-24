#include <stdio.h>
int main()
{
    int num1 , num2 , hcf = 1;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("inter the second number:");
    scanf("%d",&num2);
    
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    
    printf("The HCF : %d", num1);
    
    return 0;
}
