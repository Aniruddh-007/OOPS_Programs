int reverse(long int x)
{
    long int dup;
    int rem ;
    long int rev = 0;
    int negative;
    dup = x;
    if (x>=0){
        negative =1;
        dup *= negative ;
    }
    else{
        negative = -1;
        dup *= negative;
    }
    while (dup > 0)
    {
        rem = dup % 10;
        rev = rev * 10 + rem;
        dup = dup / 10 ;
    }
    rev *= negative;
    if (rev >= -2147483648 && rev <= 2147483647)
    {
        return rev ;
    }
    else
    {
        return 0;
    }   
}
