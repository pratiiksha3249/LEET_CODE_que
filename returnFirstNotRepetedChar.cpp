#include<iostream>
using namespace std;
int main(){
string a="tikshati";
int c=0,i,j;

for(i=0;a[i]!='\0';i++){
    for(j=0;a[j]!='\0';j++){
        if(a[i]==a[j]){
            c++;
           
        }
    }
    if(c==1){
        cout<<"first non repeted char is :"<<a[i];
        break;
    }
    c=0;
}


return 0;
}