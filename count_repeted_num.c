#include<stdio.h>
int main()
{
int i,n,a[20],c=0,num;
printf("enter limit...");
scanf("%d",&n);

printf("enter n elements in array....");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("enter num for search...");
scanf("%d",&num);

for(i=0;i<n;i++){
if(a[i]==num){
    c++;
}
}
printf("how many time repete num....%d",c);
    return 0;
}