// #include<stdio.h>
// int main()
// {
// int n,a[100],num,c,tem;
// printf("enter limit.....");
// scanf("%d",&n);
// printf("enter n elements..");
// for( int i=0;i<n;i++){
// scanf("%d",&a[i]);
// }

// for(int j=0;j<n;j++){
    
//     for(int k=j+1;k<n;++k){
//        if(a[j]<a[k]){
//          tem=a[j];
//          a[j]=a[k];
//          a[k]=tem;

//        }         

//     }
// }
// printf("your input\n");
// for(int b=0;b<n;b++){
//   printf("%d\t",a[b]);
// }

// printf("cound\n");
// for(int q=n-1;q>0;q--){
//     printf("%d\t",q);
    
// }
// printf("0");
// return 0;
// }
//all smallest num in array with every digit......
#include<stdio.h>
int main(){
int a[50],n;
printf("enter number...\n");
scanf("%d",&n);
printf("enter n element of array...");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int c;
for(int j=0;j<n;j++ ){
  c=0;
  for(int k=0;k<n;k++){
      if(a[j]>a[k]){
        c++;
      }
  }
        printf("%d\t",c);

}
return 0;

}



