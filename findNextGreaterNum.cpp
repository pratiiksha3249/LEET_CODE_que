#include <iostream>
using namespace std;
int main()
{
    int a[10] = {4, 5, 2, 25};
    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j <= 3; j++)
        {
            max = a[i];
            if (max < a[j])
            {
                cout << a[j] << "\t";
                break;
            }
            else
            {
                cout << "-1" << "\t";
                break;
                
            }
        }
    }
}