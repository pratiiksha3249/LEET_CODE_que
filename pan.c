#include<stdio.h>
int main(){
int num,r,f=1,fac,b=0,ans;
 int f1=1,fac1;
  
printf("Enter number....");
scanf("%d",&num);
int n=num;
printf("\n value of R..");
scanf("%d",&r);

for(int i=num;i>=1;i--){
f=f*i;

}
   printf(" fac of n is...%d\t",f);
b=n-r;
for(int p=b;p>=1;p--){
    
      f1=f1*p;
}
fac1=f1;
printf("\n fac of b is =%d",fac1);
ans=f/f1;
printf("\n ans....%d",ans);
    return 0;
}