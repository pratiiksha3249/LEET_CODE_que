// #include<stdio.h>
// int main()
// {
// int n,a[10];
// printf("enter limit...");
// scanf("%d",&n);
// printf("enter array elements...");
// for(int i=0;i<n;i++){
// scanf("%d",&a[i]);
// }

// int t;
// printf("enter target...");

// scanf("%d",&t);
// for(int p=0;p<n;p++){
//     if(t<a[0]){
//     printf("0");
//     exit(0);
//     }
// if(t>a[p-1]&&t<a[p+1]){
//        printf("%d",p);
       
// }

// }
  
//     return 0;

// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// int n,a[10],k,d,f=0;
// printf("enter limit...");
// scanf("%d",&n);
// printf("enter array elements...");
// for(int i=0;i<n;i++){
// scanf("%d",&a[i]);
// }

// int t;
// printf("enter target...");

// scanf("%d",&t);
// for( int p=0;p<n;p++){
//     if(t<a[0]){
//     printf("0");
//     exit(0);
//     }
// if(t>a[p-1]&&t<a[p+2]){
//        printf("%d",p);
//        k=p;
//        f=1;
//        break;
     
// }
// if(t==a[p]){
//    printf("%d",p);
//     k=p;
//     f=1;
//     printf("%d",a[p]);
//     exit(0);
// }
// }
// if(f==1){
//   while(k>0){
//   d=k%10;
//   k=k/10;

//   }
//}
//printf("\n",p);
   // return 0;

//}

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// int n,a[10],k,d,f=0;
// printf("enter limit...");
// scanf("%d",&n);
// printf("enter array elements...");
// for(int i=0;i<n;i++){
// scanf("%d",&a[i]);
// }

// int t;
// printf("enter target...");

// scanf("%d",&t);
// for( int p=0;p<n;p++){
//     if(t<a[0]){
//     printf("0");
//     exit(0);
//     }
// if(t>a[p]&&t<a[p+1]){
//        printf("%d",p);
//        k=p;
//        f=1;
//        break;
     
// }
// if(t==a[p]){
//    printf("%d",p);
//     k=p;
//     f=1;
//     exit(0);
// }
// }return 0;

// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,a[10],k,d,f=0;
printf("enter limit...");
scanf("%d",&n);
printf("enter array elements...");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}

int t;
printf("enter target...");

scanf("%d",&t);
for( int p=0;p<n;p++){
    if(t<a[0]){
    printf("0");
    exit(0);
    }
if(t>a[p]&&t<a[p+1]){
       printf("%d",p+1);
       k=p;
       f=1;
       break;
     
}
if(t==a[p]){
   printf("%d",p);
    k=p;
    f=1;
    exit(0);
}
}
   return 0;

}