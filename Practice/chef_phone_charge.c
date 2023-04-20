//Question 3 CODECHEF
/*
Chef's phone has a battery level of 
�
N percent.
Each minute:

If the phone is on charging, the battery level increases by 
2
%
2%.
Otherwise, the battery level decreases by 
3
%
3%.
Find the minimum time in which Chef can make the battery level reach exactly 
50
%
50%.
Note that the battery level should always lie in the range 
0
0 to 
100
100 (both included).

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of single lines of input 
�
N - the current battery level of Chef's phone.
Output Format
For each test case, output on a new line the minimum time in which Chef can make the battery level reach exactly 
50
%
50%.
*/

#include <stdio.h>

int main(void) {
 int t , charge;
 scanf("%d",&t);
 int i ;
 for(i = 0 ; i < t ; i++)
 {
     int T = 0;
     scanf("%d",&charge);
     if (charge == 50)
     {
         t+=0;
     }
     while(charge != 50)
     {
         if(charge > 50)
         {
             charge -= 3;
         }
         else
         {
             charge += 2;
         }
         T++;
     }
     printf("%d\n",T);
 }
 return 0;
}
