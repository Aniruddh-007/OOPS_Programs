//Multuplication of 3D Arrays
#include <stdio.h> 
 int main() { 
     int i,j,k; 
     int arr1[3][3],arr2[3][3],arr3[3][3]; 
     for (i=0;i<3;i++) { 
         for (j=0;j<3;j++) { 
             scanf("%d",&arr1[i][j]); 
         } 
     } 
     for (j=0;j<3;j++) { 
         for (i=0;i<3;i++) { 
             scanf("%d",&arr2[j][i]); 
         } 
     } 
     for (i=0;i<3;i++) { 
         for (j=0;j<3;j++) { 
             arr3[i][j]=0; 
             for (k=0;k<3;k++) { 
                 arr3[i][j] = arr3[i][j] + arr1[i][k]*arr2[k][j]; 
             } 
         } 
     } 
     for (i=0;i<3;i++) { 
         for (j=0;j<3;j++) { 
             printf("%d\n",arr3[i][j]); 
         } 
     } 
     return 0; 
 }
