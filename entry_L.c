#include<stdio.h>
int main(){
int a[50],b[50],l,x=0,sub=0,max=0;
printf("enter limit...");
scanf("%d",&l);
printf("enter first array element..");
for(int i=0;i<l;i++){
scanf("%d",&a[i]);
}
printf("enter secound array element..");
for(int j=0;j<l;j++){
scanf("%d",&b[j]);
}

for(int p=0;p<l;p++){
int x=sub;
sub=sub+a[p]-b[p];
if(sub>max){
    max=sub;
}
}
printf("total ....%d",x);
return 0;
}