#include<stdio.h>
int main(){
int a[50],n,e;
printf("enter limit...\n");
scanf("%d",&n);

printf("enter n element of array...");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int top=0,bottom=n-1,mid,c,d;
while(top<=bottom)
{
for(int p=0;p<n;p++){
c=0;
while(n<0){
    mid=top+bottom/2;
    d=a[mid]%10;
   a[mid]=a[mid]/10;
     c++;
}
     printf("%d",c);
}
}
return 0;
}

