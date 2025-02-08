#include<iostream>
using namespace std;
int main(){
string addedCharStr="tikshya";
string originalStr="tiksha";
int f=0,i,j,endInd=0;

for(i=0;i<originalStr[i]!='\0';i++){
endInd++;
}
// cout<<endInd;

for(i=0;addedCharStr[i]!='\0';i++){
          for(j=0;originalStr[j]!='\0';j++){
                   if(addedCharStr[i]==originalStr[j]){
                 
                   break;
                   }
          }
          if(j==endInd){
            cout<<addedCharStr[i];
            break;
          }
}







// for(i=0;addedCharStr[i]!='\0';i++){
//            for(j=0;originalStr[j]!='\0';j++){
//                          if(addedCharStr[i]==originalStr[j]){
//                                break;
                         
                        
//                          }
//                          else{
//                            continue;
//                          }
                         
//            }
//         //    if(f==1){
//         //     cout<<"not found "<<addedCharStr[i];
//         //     break;
//         //    }

// }

    return 0;
}