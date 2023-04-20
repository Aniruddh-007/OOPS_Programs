// Strong Number 

#include <stdio.h> 
  
 int fact(int n) { 
   int i,factorial=1; 
   for (i=1;i<=n;i++) factorial *= i; 
   return factorial; 
 } 
  
 int main() { 
   int ll,ul; 
   printf("\nEnter lower, upper limits: "); 
   scanf("%d,%d",&ll,&ul); 
   int i; 
   int temp; 
   for (i=ll;i<=ul;i++) { 
     int sum=0; 
     temp = i; 
     while (temp>0) { 
       sum += fact(tmp%10); 
       temp /= 10; 
     } 
     if (sum==i) printf("%d is a strong number\n",i); 
   } 
   return 0; 
 }
