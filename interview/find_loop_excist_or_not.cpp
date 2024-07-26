#include<iostream>
using namespace std;
int main(){

 int a[10]={1,2,4,6,8,9},c=0;
//  int a[10]={16,121,144,165,186,9},c=0;
 for(int i=0;i<5;i++){
    if(a[i]+2==a[i+1]){
        c++;
    
    }
 }
if(c>1){
    cout<<"loop is present..";
}
else{
    cout<<"loop is not present..";
}
    return 0;
}