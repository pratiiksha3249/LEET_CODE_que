#include <stdio.h>
int main()
{
    int a[20] = {1, 7, 3, 6, 5, 6};
    int i, j, c = 0, p, c1, l = 0, r = 0, n = 6;
    c1 = 1;
start:
    for (i = 0; i < c1; i++)
    {
        l = l + a[i];
    }
    printf("l value is :%d\n ", l);

    p = c1 + 1;

    for (j = p + 1; j < n; j++)
    {
        r = r + a[j];
    }
    printf("r value is :%d\n ", r);
    if (l == r)
    {
        printf(" pivot is : %d\n ", p);
    }
    else
    {
        c1 + 1;
        goto start;
    }
    return 0;
}