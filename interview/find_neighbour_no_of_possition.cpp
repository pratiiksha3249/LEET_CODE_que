#include <iostream>
using namespace std;
int main()
{
    int a[15] = {2, 6, 3, 4, 5, 6, 2, 4, 7, 3, 8,5};
    // int a[10] = {2, 6, 3,8};
    int p=3;
    for (int i = 0; i < 10; i++)
    {
        if()
        if (a[i] < a[i + 2])
        {
            cout << a[i] << "\t";
        }

        else if (i == 10)
        {
            break;
        }
        else
        {
            cout << a[i + 2] << "\t";
        }
    }
}