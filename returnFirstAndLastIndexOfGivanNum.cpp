#include<iostream>
using namespace std;

void findIndex(int a[],int n,int targetNum ){
              int i,j;     
for(i=0;i<n;i++){
        if(a[i]==targetNum){
            cout<<"first index is :"<<i<<endl;
            break;
        }
}

for(j=n-1;j>0;j--){
       if(a[j]==targetNum){
               cout<<"last index is :"<<j;
               break;
                     }
}   
}

int main(){
int a[]={11,22,33,33,33,33,88,7},targetNum;
int n=sizeof(a) / sizeof(a[0]);

cout<<" plase enter target number :";
cin>>targetNum;

findIndex(a,n,targetNum);

   return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
// int a[]={11,22,33,33,33,33,88,7},targetNum;
// int n=sizeof(a) / sizeof(a[0]);
// cout<<" plase enter target number :";
// cin>>targetNum;
// for(int i=0;i<n;i++){
//         if(a[i]==targetNum){
//             cout<<"first index is :"<<i<<endl;
//             break;
//         }
// }
// for(int j=n-1;j>0;j--){
//        if(a[j]==targetNum){
//                cout<<"last index is :"<<j;
//                break;
//        }
// }

//     return 0;
// }