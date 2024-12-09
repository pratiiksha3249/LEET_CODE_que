#include<iostream>
using namespace std;

int checktOrf(int a[],int n){
    int i,c=0,j;
    for(i=0;i<n;i++){
          for(j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
          }
          if(c>1){
            cout<<"then number is :"<<a[i];
            return c;
          }
          else{
            c=0;
          }
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

cout<<"number of time "<<checktOrf(a,n)<<endl;

    return 0;
}