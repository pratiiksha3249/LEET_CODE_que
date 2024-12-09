#include<iostream>
using namespace std;

int checktOrf(int a[],int n){
    int i;
    for(i=0;i<n;i++){
            if(a[i]<a[i+1]){

            }
            else{
                return false;
               
            }
    }
    if(i==n){
           return true;
    }
}
int main(){
int n;
cout<<"enter limit for array :";
cin>>n;
int a[n];
cout<<"enter array elements :"<<endl;
for(int i=0;i<n;i++){
           cin>>a[i];
}

if(checktOrf(a,n)){
    cout<<"array is in asc order "<<endl;
}
else{
    cout<<"array is not in asc order "<<endl;
}



    return 0;
}