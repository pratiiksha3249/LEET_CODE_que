#include<iostream>
using namespace std;
int main(){
 int a[]={1,11,3,9,4,5},ind,c=1;
 int n = sizeof(a) / sizeof(a[0]);
 cout<<"enter target index :";
 cin>>ind;

for(int i=0;i<=ind;i++){
 
        for(int j=0;j<=ind;j++){
                   if(a[i]==a[j]){
                    c++;
                   }
        }
                    // cout<<c<<endl;
           

         if(c>2){
        cout<<" repeted num exist ";

               break;
        }  
        else{
            c=1;
        }         
}

if(c==1 || c==2){
    cout<<"num is not repeted ";
}

    return 0;
}