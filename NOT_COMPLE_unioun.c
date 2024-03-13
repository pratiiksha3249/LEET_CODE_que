#include<stdio.h>
int main()
{
  int a[30]={11,11,22,22,33,33,44,55,66},i,j,c=0;
for(i=0;i<9;i++){
    for(j=0;j<9;j++){
        if(a[i]==a[j]){
            c++;
    }
    if(c>2){
        printf("%d\t",a[j]);
       
           c=0;
        }

    }
    
}

    return 0;
}