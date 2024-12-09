#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
int a[5]={2,1,4,5,3},m=0,i,j;
// vector<int> v={};

for(i=0;i<5;i++){
     for(j=0;j<5;j++){
          if(i!=j){

        m=m+a[j];
     // v.insert(v.begin()+ 1,0,m);
          }

     }
     cout<<m<<endl;
     m=0;
}
 }