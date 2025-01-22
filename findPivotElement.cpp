#include<iostream>
using namespace std;
int main(){
// int a[]={3,2,11,3,2};
// int a[]={1,7,3,6,5,6};
 int a[]={5,5,3,88,13};
//  int a[]={13,88,5,5,3};

int n=sizeof(a) / sizeof(a[0]);
cout<<"total is "<<n<<endl<<endl;

int i,j,sum1=0,sum2=0,f=0;

for(i=0;i<n;i++){
    for(j=i+2;j<n;j++){      
        sum2=sum2+a[j];       
    }
    sum1=sum1+a[i];
        cout<<sum1<<"\t"<<sum2<<endl;
    if(sum1==sum2){
        cout<<a[i+1];
        cout<<endl<<"pivot element index is :"<<i+1;
        break;
       
    }
    sum2=0;
}
    return 0;
}