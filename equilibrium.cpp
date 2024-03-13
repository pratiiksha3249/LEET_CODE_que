#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[6] = {1,2,2,9,3,2};
for (int i = 1; i < 6; i++)
{
    int l=0, r=0;
    for (int j = 0; j < i; j++)
    {
        l = l + arr[j];
    }
    for (int k = i+1; k < 6; k++)
    {
        r = r+arr[k];
    }
    if(l==r){
        cout<<"final ans"<<l<<" "<<i<<endl;
        break;
    }   
}
return 0;
}