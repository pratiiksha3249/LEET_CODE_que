#include<stdio.h>
int main(){
int a[50],num,i,j,ans=1,f=0;
printf("enter number...\n");
scanf("%d",&num);
// for(int i=1;i<=num;i++){
// scanf("%d",&a[i]);
// }
for(j=1;j<=num;j++){
      if(j*j==num){
        f=1;
        break;
      }
}
if(f==1)
{
    printf("true");
}
else{
    printf("false");
}
return 0;
}