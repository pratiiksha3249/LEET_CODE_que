#include <iostream>
using namespace std;
int main()
{
    int a[10] = {10, 30, 20, 100,300,200,400,77,88,9}, i, t, pass, n = 10, j, max = 0, c = 0, d;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    d = a[i + 1] - a[i];
    for (i = 0; i < n; i++)
    {
        if (a[i + 1] - a[i] == d)
        {
            c++;
            cout << c << endl;
        }
        else
        {
            if (max < c)
            {
                max = c + 1;
            }
            c = 0;
            d = a[i + 1] - a[i];
        }
    }
    cout << "max :" << max;
    return 0;
}