/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/
int searchInsert(int* nums, int numsSize, int target)
{
    int x ;
    int position ;
    if (target > nums[numsSize-1]){
        position = numsSize;
    }
    else if (target < nums[0])
    {
        position = 0;
    }
    else
    {
        for(x = 0 ; x < numsSize ; x++)
        {
            if (target ==  nums[x])
            {
                position = x;
                break;
            }
            if (target > nums[x] && target < nums[x + 1]){
                position = x + 1;
                break;
            }
        }
    }
    return position;
}
