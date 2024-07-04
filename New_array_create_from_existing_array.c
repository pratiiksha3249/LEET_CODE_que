#include<stdio.h>
int main(){
int a[20]={1,0,2,0,3,4},i,b[20],n=6,c=0,c1=0,j=0;
for(int i=0;i<n;i++)
{
    if(a[i]!=0){
        b[j]=a[i];
        j++;
        c1++;
        //  printf("%d",b[i]);
    }
    else if(a[i]==0){
        c++;
// b[i]=0;
    }
}

printf("\n");
for(int i=0;i<c1;i++){
       printf("%d\t",b[i]);
}

    return 0;
}