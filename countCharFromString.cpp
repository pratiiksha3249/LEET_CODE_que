#include <iostream>
using namespace std;
int main()
{
    string a = "aaapppp", cc;
    int c = 0, f = 0, ind = 0, j, i;
    for (i = 0; i <7; i++)
    {
        if (a[i] == a[i + 1])
        {
            c++;
        }
        else
        {
            cout << a[i] << c+1;
            c = 0;
        }
    }
    return 0;
}