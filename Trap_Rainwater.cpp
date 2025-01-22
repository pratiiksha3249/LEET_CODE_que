#include<iostream>
using namespace std;
int main(){
 int a[20]={0,1,0,2,2,3,1,0,3,4},c=0;
for(int i=0;i<10;i=i+2){
      if(a[i] && a[i+1]!=0){
       if(a[i]<a[i+1]){

        c=c+a[i];
       }
       else{
        c=c+a[i+1];
       }
      }
}
cout<<"total liter water is strored..... "<<c;

  return 0;
}