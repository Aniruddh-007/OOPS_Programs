#include <stdio.h>
//Function Prototype
int ispalindrome(int temp , int x);
int main()
{
    //Initializing Variables 
    int num ;
    printf("Enter a number: ");
    scanf("%d", &num);
    //Duplicate Variable initialization 
    int temp = num ;
    //Function Call
    int a = ispalindrome(temp , num);
    //Checking condition to print
    if (a == 1)
    {
        printf("Given number %d is a Palindrome",num);
    }
    else 
    {
        printf("Given number %d is not a Palindrome",num);
    }
    return 0 ;
}

//Function Definition 
int ispalindrome(int temp , int x)
{
    int r;
    //LOGIC
    while (x > 0)
    {
        r = r * 10 + x % 10;
        x = x / 10;
    }
    //Checking if it is a Palindrome
    if (temp == r)
    {
        return 1 ; 
    }
    else
    {
        return 0 ; 
    }
}
