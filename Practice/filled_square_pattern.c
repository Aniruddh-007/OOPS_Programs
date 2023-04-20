//Filled SQUARE pattern 

#include <stdio.h>  
int main()  
{  
   int n;
   //Getting value from user  
   printf("Enter the number of rows");  
   scanf("%d",&n);  
   for(int i=0;i<n;i++)  
   {  
       for(int j=0;j<n;j++)  
       {  
           //Printing the star.
           printf("*");  
       }
       //Print to move the cursor to next line  
       printf("\n");  
   }  
   return 0;  
} 
