#include<stdio.h>
int main(){
int a[100],n,c=0;
printf("enter array limit....");
scanf("%d",&n);
printf("enter array element...");
for( int i=0;i<n;i++){
scanf("%d",&a[i]);
if(i%2!=0){
    c++;
}

}
printf("count odd num =%d",c);
    return 0;
}