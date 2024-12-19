#include <iostream>
using namespace std;
int main()
{
    int a[10] = {2, -1, 3, -2, 1, 4}, f = 0, m;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (a[i] > 0)
            {
                m = a[i] * -1;
                if (m == a[j])
                {
                    cout<<"true";
                }
            }
        }
    }
}
