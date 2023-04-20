#include <stdio.h> 
  
 int main() { 
   int n,i; 
   scanf("%d (N value)",&n); 
   int arr[n]; 
   for (i=0;i<n;i++) { 
     scanf("%d",&arr[i]); 
   } 
   printf("The array:\n"); 
   int j; 
   for (j=0;j<n;j++) { 
     printf("%d\n",arr[j]); 
   } 
   int max; 
   max = arr[0]; 
   for (i=0;i<n;i++) { 
     if (arr[i]>max) { 
       max = arr[i]; 
     } 
   } 
   printf("The largest number:\n"); 
   printf("%d",max); 
   return 0; 
 }
