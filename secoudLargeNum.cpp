#include <iostream>
using namespace std;

 int secmax(int a[]){
        int max = 0,max1=0, in = 0,i,j;

    for (j = 0; j < 5; j++)
    {
        if (max < a[j])
        {
            max = a[j];
            in = j;
        }
    }
    for ( i = 0; i < 5; i++)
    {
        if (max1 < a[i])
        {
            max1 = a[i];
            a[in] = 0;
        }
    }

    return max1;
 }
 
int main()
{ 

    int a[6] = {5, 9, 6, 2, 3, 1};
   cout<<"secound max num is :"<<secmax(a);
    return 0;

}