#include <stdio.h>
//Function Prototype
int rev(int x);

int main()
{
    //Initializing variables 
    int num , number ;
    //printing statement
    printf("Enter Number : ");
    //Getting the value from user
    scanf("%d",&num);
    //Function Call
    number = rev(num);
    //Printing the final value 
    printf("%d",number);
}

//FUNCTION 
int rev(int x)
{
    //Initializing variables 
    int reverse , rem ;
    while (x != 0)
    {
        rem = x % 10 ;
        reverse = reverse * 10 + rem ;
        x = x / 10 ;
    }
    //Returning the Value
    return reverse ;
}
