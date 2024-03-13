#include<stdio.h>
int main()
{
int a[100],n;
 printf ("enter limit....");
 scanf("%d",&n);
 printf("enter n numbers....");
 for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

 }
 int num;
 printf("enter num for search...");
scanf("%d",&num);
  
 int bottom=n-1,top=0,mid,flag=0;

while(top<=bottom){
  mid=top+bottom/2;
  if(a[mid]==num){
    flag=1;
    break;
  }

if(a[mid]< num)
top=mid+1;

else
    bottom=mid-1;

}


if(flag==1)
printf("num is found....");

else
    printf("num is not found....");

   return 0;
}