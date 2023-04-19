int removeDuplicates(int A[], int n) 
{
    if (n == 0) return 0;
    int x ,y;
    x = 1, y = 1;
    while (y < n) {
        while (A[y - 1] == A[y]) {
            y++;
            if (y >= n) goto EXIT;
        }
        A[x] = A[y];
        x++;
        y++;
    }
EXIT :
    return x;
}
