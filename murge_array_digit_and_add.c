// #include<stdio.h>
// int main(){
// int a[50],n,sum=0,k;
// printf("enter limit...\n");
// scanf("%d",&n);
// printf("enter num for add in k...");
// scanf("%d",&k);
// printf("enter n element of array...");
// for(int j=0;j<n;j++){
// scanf("%d",&a[j]);
// }
// int d,m,flag=0;
// for(int i=0;i<n;i++){
// d=a[i]%10;
// a[i]=a[i]/10;
// printf("%d",d);
// }

// return 0;
// }
#include<stdio.h>
int main(){
int a[50],n,sum=0,k,y;
printf("enter limit...\n");
scanf("%d",&n);
// // printf("enter num for add in k...");
// // scanf("%d",&y);
printf("enter n element of array...");
for(int j=0;j<n;j++){
scanf("%d",&a[j]);
}
int d,c;

  for(int k=0;k<n;k++){

    
      while(a[k]>0)
      {
        d=a[k]%10;
        a[k]=a[k]/10;
        
         printf("%d");
      }
    }
    
    // int v=c%100;
    // v=v-1;
    // printf("%d",v);
    
    // int d1;
    // while(c>0){
    //   d1=c%10;
    //   c=c/10;

    // }
    // printf("%d",d1);

return 0;
}
