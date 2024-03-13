//ip-38
// 38->3+8=11
// 11->1+1=2
// op-2
// #include<stdio.h>
// int main()
// {
//    int d1, d,n,sum=0,s=0,n1;
//    printf("enter a number..");
//    scanf("%d",&n);
//    while(n>0){
    
//     d=n%10;
//     sum=sum+d;
//     n=n/10;
//    }

// while(sum>0){
// d1=sum%10;
// s=s+d1;
// sum=sum/10;
// }
// printf("%d",s);

//     return 0;
// }

#include<stdio.h>
int main()
{
   int d1, d,n,sum=0,s=0,n1;
   printf("enter a number..");
   scanf("%d",&n);
   while(n>0){
    
    d=n%10;
    sum=sum+d;
    n=n/10;
    
   }

while(sum>0){
d1=sum%10;
s=s+d1;
sum=sum/10;
}
printf("%d",s);

    return 0;
}