// #include <iostream>
// using namespace std;
// int c;
// int checktOrf(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//      c = 0;
        
//         if (n - 1 != a[i])
//         {
//             for (int j = 0; j < n; j++)
//             {

//                 if (a[i] + 1 == a[j])
//                 {
//                     c++;
//                 }

//             }
//         }
//         if (c == 0)
//         {
//             return a[i] + 1;
//         }
//     }
// }
// int main()
// {
//     int n, c = 0, num;
//     cout << "enter limit for array :";
//     cin >> n;
//     int a[n];
//     cout << "enter array elements :" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "missing value is " << checktOrf(a, n);

//     // return 0;
// }






#include <iostream>
using namespace std;

int checktOrf(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
         int c = 0;
        if (n - 1 != a[i])
        {
            for (int j = 0; j < n; j++)
            {

                if (a[i] + 1 == a[j])
                {
                   c++;
                }
            }
        }
        if (c == 0 && a[i]!=n)
        {
            return a[i] + 1;
        }
    }
}
int main()
{
    int n, c = 0, num;
    cout << "enter limit for array :";
    cin >> n;
    int a[n];
    cout << "enter array elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "missing value is " << checktOrf(a, n);

    // return 0;
}