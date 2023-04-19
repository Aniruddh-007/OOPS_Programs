int divide(long int Div,long int divi){
    if (Div/divi >2147483647)
    {
        return 2147483647;
    }
    else if(Div/divi<-2147483648)
    {
        return -2147483648;
    }
    
    else 
    {
        return Div/divi;
    }
}
