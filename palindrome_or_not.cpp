#include<iostream>
using namespace std;
class palin{
           public:
           int n,i,n1,d,a[100];

           void getval(){
            cout<<"\n enter value=";
            cin>>n;

           }

           void check_palin(){
             while(n>0){
                d=n%10;
                a[i]=d;
                i++;
               n=n/10;
             }
             for(int j=0;j<n;j++){
                cout<<a[j];
             }
           
           }

};

int main(){
palin a;
a.getval();
a.check_palin();
}