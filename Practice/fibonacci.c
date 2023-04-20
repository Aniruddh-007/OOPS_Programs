#include <stdio.h> 
 // Fibonacci numbers 
  
 int fibo(int n) { 
     int a,b,c; 
     int odd=0,even=0; 
     a = 0; 
     b = 1; 
     int i=0; 
     while (a<n) { 
         c = a+b; 
         printf("%d, ",a); 
         a = b; 
         b = c; 
         if (i%2==0) odd+= a; 
         else even+=a; 
         i++; 
     } 
     printf("%d",a); 
     printf("\n%d",odd); 
     printf("\n%d",even); 
 } 
  
 int main() { 
     int n; 
     scanf("%d",&n); 
     fibo(n); 
 }
