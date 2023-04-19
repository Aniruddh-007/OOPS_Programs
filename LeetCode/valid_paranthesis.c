bool isValid(char * s){
    int length = strlen(s);
    if (length % 2 != 0) {
        return false;
    }
    int x = -1;
    char *array = (char *)malloc(length * sizeof(char));
    for (int i = 0 ; i < length ; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') 
        {
            array[++x] = s[i];
        } else 
        {
            if (x == -1) 
            {
                return false;
            }
            if (s[i] == ')' && array[x--] != '(') 
            {
                return false;
            }
            if (s[i] == ']' && array[x--] != '[') 
            {
                return false;
            }
            if (s[i] == '}' && array[x--] != '{') 
            {
                return false;
            }
        }
    }
    free(array);
    return x == -1;
}
