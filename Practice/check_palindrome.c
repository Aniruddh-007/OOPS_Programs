//CHECKING WHETHER A NUMBER IS A PALINDROME OR NOT 

#include <stdio.h>
//FUNCTION PROTOTYPE
int palindrome(int n);

int main() {
    int num ;
    printf("Enter number : ");
    scanf("%d",&num);
    int a = palindrome(num); //FUNCTION CALL
    if (a == 1) printf("%d is a Palindrome",num);
    else printf("%d is NOT a Palindrome",num);
    return 0;
}

//FUNCTION DEFINITION 
int palindrome(int n)
{
    int rem ;
    int rev ;
    int dup = n ;
    while (n != 0)
    {
        rem = n % 10 ;
        rev = rev * 10 + rem ;
        n = n / 10 ;
    }
    if (rev == dup)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}
