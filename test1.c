#include<stdio.h>
int main(){
//int i,n=6,a[10]={2,3,5,2,8,1,2};
int i,n=6,a[10]={1,2};

for(int i=1;i<2-1;i++){
  if(a[i]>a[i+1] && a[i+1]<a[i+2])
     printf("%d",a[i]);

}


    return 0;
}