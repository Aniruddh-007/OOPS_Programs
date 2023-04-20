#include <stdio.h>
int main()
{
  int row, c, n;

  printf("Enter the number of rows : ");
  scanf("%d", &n);
  
  //Loop to print rows
  for (row = 1; row <= n; row++)  
  {
    //Print spaces in rows
    for (c = 1; c <= n-row; c++) 
      printf(" ");
    
    //Loop to print stars
    for (c = 1; c <= 2*row - 1; c++) 
      printf("*");

    printf("\n");
  }

  return 0;
}
