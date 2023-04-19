//SORTING AN ARRAY IN ASC AND DESC ORDER
#include <stdio.h>

//Function definition 
int sort_arr(int x)
{
    //initializing variables
    int i , j ;
    //initializing arr1 and arr2 with length x and y
    int arr[x] , z ;
    for(i = 0 ; i < x ; i++)
    {
        //inputing the values into the array
        scanf("%d",&arr[i]);
    }
    printf("ORIGINAL ARRAY :\n");
    for(i = 0 ; i < x ; i++)
    {
        //printing the elements of the array in original order
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    //ASC ORDER
    for (i = 0 ; i < x ; i++)
    {
        for (j = i + 1 ; j < x ; j++)
        {
            if(arr[i] > arr[j])
            {
                z = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = z ; 
            }
        }
    }
    printf("SORTED ARRAY ASC ORDER :\n");
    for(i = 0 ; i < x ; i++)
    {
        //printing the elements of the array in ascending order
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    //DESC order
    for (i = 0 ; i < x ; i++)
    {
        for (j = i + 1 ; j < x ; j++)
        {
            if(arr[i] < arr[j])
            {
                z = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = z ; 
            }
        }
    }
    printf("SORTED ARRAY DESC ORDER :\n");
    for(i = 0 ; i < x ; i++)
    {
        //printing the elements of the array in ascending order
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    //initializing variables row and col
    int n;
    printf("Enter No of elements : ");
    //getting value of n
    scanf("%d",&n);
    //calling function 
    sort_arr(n);
    return 0;
}
