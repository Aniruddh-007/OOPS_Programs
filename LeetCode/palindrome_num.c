bool isPalindrome(long int x)
{
    if (x < 0)
    {
        return false;
    }
    else
    {
        int rem ;
        long int dup = x;
        long int rev = 0;
        while (dup > 0){
            rem = dup % 10;
            rev = rev * 10 + rem;
            dup = dup / 10;
        }
        if (rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
