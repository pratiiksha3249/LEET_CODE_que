// a[20]={1,22,88,44,89,22,11,9}
//88 89 smallest neighbour
#include<stdio.h>
int main(){
int a[20]={1,22,88,44,89,22,11,9},i;

for(i=1;i<7;i++){
    if(a[i]<a[i+1])
 printf("%d",a[i]);

    }


    return 0;
}