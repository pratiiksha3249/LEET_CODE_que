// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[10] = {22, 31, 44, 2, 51, 64, 21, 6, 9},i;
//     for ( i = 0; i < 9; i++)
//     {
//         for (int j = i + 1; j < 9; j++)
//         {
//             if (i != 9)
//             {
//                 if (a[i] < a[j])
//                 {
//                     cout << a[j] << "\t";
//                     break;
                    
//                 }
//             }
//             else{
//                 cout<<"-1";
//             }

//         }
//     }
//                 if(i==9){
//                 cout<<"-1";
//             }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a[10] = {22, 31, 44, 2, 51, 64, 21, 6, 9},i;
    for ( i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (i != 9)
            {
                if (a[i] < a[j])
                {
                    cout << a[j] << "\t";
                    break;
                    
                }
            }
            else{
                cout<<"-1";
            }

        }
    }
                if(i==9){
                cout<<"-1";
            }
    return 0;
}