#include <iostream>
using namespace std;
int main()
{
    int a[] = {8, 3, 8, 5, 6}, max = 0, sum = 15;
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
            
            if (a[i] + a[j] == sum)
            {
                cout << "equal sum :" << a[i] << "\t" << a[j] << endl;
                exit(0);
            }
            else
            {
                if (a[i] + a[j] > max)
                {
                    max=a[i]+a[j];

                    if (max < sum)
                    {
                        max = a[i] + a[j];
                        cout << max << endl;
                    }
                }
            }
            }
        }
    }
}
