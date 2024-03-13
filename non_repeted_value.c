//Find non repeted number in array a[10,2,10,2,5] =5
#include <stdio.h>
int main()
{
    int a[20] = {2, 1, 44, 2, 44}, i, f = 0, j, c=0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                c++;
            }
        }
        if (c == 1)
        {
        
            printf("%d", a[i]);
            break;
        }
          c=0;
        
        
    }

    return 0;
}