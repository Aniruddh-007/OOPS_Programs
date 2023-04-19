int removeElement(int* nums, int numsSize, int val)
{
    int x, y , num; ;
    x = 0, y = numsSize - 1;
    while (x < numsSize) 
    {
        if (nums[x] == val) 
        {
            num = nums[y];
            nums[y] = nums[x];
            nums[x] = num;
            numsSize--;
            y--;
        }
        else 
        {
            x++;
        }
    }
    return numsSize;
}
