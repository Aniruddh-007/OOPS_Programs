//TRANSPOSE OF A MATRIX
#include <stdio.h>

//Function definition 
int transpose_matrix(int x , int y)
{
    //initializing variables
    int i , j ;
    //initializing arr1 and arr2 with length x and y
    int arr1[x][y] , arr2[x][y] ;
    for(i = 0 ; i < x ; i++)
    {
        for(j = 0 ; j < y ; j++)
        {
            //inputing the values into the array
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("ORIGINAL MATRIX :\n");
    for(i = 0 ; i < x ; i++)
    {
        for(j = 0 ; j < y ; j++)
        {
            //printing the elements of the array
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    for(i = 0 ; i < x ; i++)
    {
        for(j = 0 ; j < y ; j++)
        {
            //Inputing the values of arr1 into arr2 
            arr2[i][j] = arr1[j][i];
        }
    }
    printf("TRANSPOSE MATRIX :\n");
    for(i = 0 ; i < x ; i++)
    {
        for(j = 0 ; j < y ; j++)
        {
            //printing elements of arr2
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    //initializing variables row and col
    int row , col ;
    printf("Enter No of row(s) : ");
    //getting value of row
    scanf("%d",&row);
    printf("Enter No of col(s) : ");
    //getting value of row
    scanf("%d",&col);
    //calling function 
    transpose_matrix(row , col);
    return 0;
}
