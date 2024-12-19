#include <iostream>
using namespace std;
int main()
{
    int  i,n;
    cout<<"enter limit for array :"<<endl;
    cin>>n;

    int a[n];
    cout<<"enter array elements :"<<endl;
    for(int i=0;i<n;i++){
            cin>>a[i];
    }
    cout<<"lonly numbers are :"<<endl;
    for (int i = 1; i < n-1; i++)
    {
        if (a[i] == a[i - 1] + 1 || a[i] == a[i - 1] - 1 || a[i] == a[i + 1] + 1 || a[i] == a[i + 1] - 1)
        {
            continue;
        }
        else
        {
            cout << a[i]<<"\t";
        }
    }
}