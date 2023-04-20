#include <stdio.h> 
  
void main() { 
  int a,b; 
  int i; 
  printf("Enter lower limit: "); 
  scanf("%d",&a); 
  printf("Enter upper limit: "); 
  scanf("%d",&b); 
  for (i=a;i<=b;i++) { 
    int arm=0,ld,temp=i; 
    while (temp>0) { 
      ld = temp%10; 
      arm += ld*ld*ld; 
      temp/=10; 
    } 
    if (arm==i) printf("%d\n",i); 
  } 
}
