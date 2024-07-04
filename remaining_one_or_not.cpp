// i/p 19
// 1^*9^=82
// 8^*2^=68
// 6^*8^=100
// 1^*0^=1
// o/p=true

// i/p=2
// o/p false

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "ram1";
//     int n = 19, m=0, d, f = 0;

//     while (n > 0)
//     {
//         while (m != 1)
//         {


//              //cout<<"ram";
//             d = n % 10;
//             m = m + d * d;
//             n = n / 10;
//             // cout<<"ram";

//             if (m == 1)
//             {
//                 f = 1;
//                 break;
//             }

//             if (m == 0)
//             {
//                 f = 2;
//                 break;
//             }
//         }

//         if (f == 1 || f == 2){

//             break;
//         }
//             n=m;
//             m=0;
//     }

//     if (f == 1)
//         cout << "true";
//     else
//         cout << "false";

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    // cout << "ram1";
    int n=19, m=0, d,k;
    
if(n>9){
k:
    while (n > 0)
    {
            d = n % 10;
            m = m + d * d;
            n = n / 10;
    }
   cout<<m<<endl;

    if (m == 1){

        cout << "true";
       
    }
    else if (m==0){

        cout << "false";
    }
    else if (m !=1 && m!=0){
        n=m;
        m=0;
        goto k;
    }
}


else{
    cout<<"false";
}
    return 0;
}