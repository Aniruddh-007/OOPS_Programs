#include <stdio.h>
 
int happyNumber(int);
 
int main()
{
    int num ;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 1 && temp != 4)
    {
        temp = happyNumber(temp);
    }
    //CHECK
    if (temp == 1)
    {
        printf("%d is a happy number", num);
    }
    else if (temp == 0)
    {
        printf("%d is NOT a happy number", num);
    }
    return 0;
}
 
//FUNCTION DEFINITION
int happyNumber(int num)
{
    int rem = 0, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem);
        num /= 10;
    }
    return sum;
}
