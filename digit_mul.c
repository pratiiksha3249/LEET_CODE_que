#include<stdio.h>
int main(){
int n,m=1,s=0,ans,d;
printf("enter number..");
scanf("%d",&n);
while(n>0){
d=n%10;
m=m*d;
s=s+d;
n=n/10;
}
printf("ans of digit mul...%d",m);
printf("\n ans of digit sum...%d",s);
printf("\n final ans....%d",m-s);

    return 0;
}