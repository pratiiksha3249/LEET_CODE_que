#include<algorithm>
#include<iostream>
using namespace std;
int main()
{  
    int demo[5] = {4,7,2,90,100},tem[20]; 
    int len = sizeof(demo)/sizeof(demo[0]); 

    for(int j=0;j<len;j++){
        tem[j]=demo[j];
    } 
    std::sort(demo, demo + len);
     for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
               if(tem[i]==demo[j]){
                cout<<j+1;
                break;
               }
        }
     }
}