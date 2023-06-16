/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

*/
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
