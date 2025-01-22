#include<iostream>
using namespace std;
int main(){
int a[10]={2,3,1,4,6},sum=5;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
           if(a[i]+a[j]==sum){
            cout<<a[i]<<"\t+           "<<a[j]<<endl;
           }
    }
}
  return 0;
}