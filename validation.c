#include<stdio.h>
int main()
{
   int i,n;
printf("enter limit...");
scanf("%d",&n);

for(i=1;i<=n;i++){

if(i%3==0){
    printf("fizz\t");
}
else if(i%5==0){
    printf("\tbuzz\t");
}
else if(i%3==0 && i%5==0)
{
    printf("\tfizzbuzz\t");
}
else{
    printf("\t%d\t",i);
}
 
}

    return 0;
}