#include<stdio.h>
int main()
{
 int n,num,flag=0,a[100];
 printf ("enter limit....");
 scanf("%d",&n);
 printf("enter n numbers....");
 for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

 }
printf("enter num for search....");
scanf("%d",&num);
int top=0,bottom=n-1,mid;
for(int j=top;j<bottom;top++){
    mid=top+bottom/2;
    if(a[j]==num){
        flag=1;
        break;
    }
    if(a[mid]<num)
    top=mid+1;
    else
    bottom=mid-1;
}
if(flag==1)
printf("num is found...");
else
printf("num is not found...");
    return 0;
}