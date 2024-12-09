// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
// string s="bbaa";

// for(int i=0;i<4;i++)
// {
//     for(int j=i;j<4;j++){
//         cout<<s[j];
//     }
//     cout<<endl;
// }
#include<iostream>
#include<string>
using namespace std;
int main(){
string s="[)";

for(int i=0;i<7;i++)
{
    // cout<<s[1];
    if(s[i]=='(' && s[i+1]==')'){
        
        cout<<"true"<<s[i]<<s[i+1];
        if((s[i]=='(' != s[i+1]==')')){

                 cout<<false;
                 break;
        }
    
    }
    else if(s[i]=='{' && s[i+1]=='}'){
        cout<<"true"<<s[i]<<s[i+1];
        if((s[i]=='[' != s[i+1]==']')){

                 cout<<false;
                 break;
        }
    }
    else if(s[i]=='{' && s[i+1]=='}'){
        cout<<"true";
    }
    else if (i>6){
        cout<<"not same ....";
        break;
    }
}






}