#include<iostream>
using namespace std;
int main(){
int a[]={2,4,6,10};
int d=a[1]-a[0],i,f;
int len = sizeof(a) / sizeof(a[0]);
cout<<len;
for(i=0;i<len;i++){
   if(a[i]+d==a[i+1]){
          continue;
   }
   else{
    f=1;
    break;
   }
}
  if(f==1){
    cout<<"missing element is "<<a[i]+d;
    
  }
   
                                                                                                                                                                                                                                                                         
}