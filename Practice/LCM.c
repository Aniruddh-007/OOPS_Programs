#include <stdio.h> 
 int lcm(int a,int b); 
 int main(){ 
     int n1; 
     int n2; 
     scanf("%d",&n1); 
     scanf("%d",&n2); 
     lcm(n1,n2); 
 } 
 int lcm(int a, int b){ 
     int temp = b; 
     int ans; 
     while (true){ 
         if ( (temp % a == 0) && (temp % b == 0)){ 
             ans = temp; 
             break; 
          
         } 
         temp += 1; 
          
     } 
     printf("%d",ans); 
      
 }
