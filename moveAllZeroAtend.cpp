#include<iostream>
using namespace std;

int checktOrf(int a[],int n){
    int c=0;
    for(int i=0;i<n;i++){
    if(a[i]==0)
    {
        c++;
    }
    else{
        cout<<a[i];
    }
    }
    for(int i=0;i<c;i++){
        cout<<"0";
    }
}
int main(){
int n,c=0,num;
cout<<"enter limit for array :";
cin>>n;
int a[n];
cout<<"enter array elements :"<<endl;
for(int i=0;i<n;i++){
           cin>>a[i];
}

checktOrf(a,n);

    return 0;
}