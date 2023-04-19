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
