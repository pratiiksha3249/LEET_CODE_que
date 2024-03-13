// #include<stdio.h>
// int main(){
// int a[50],n,c,d,k=0;
// printf("enter limit...\n");
// scanf("%d",&n);

// printf("enter n element of array...");
// for(int i=0;i<n;i++){
// scanf("%d",&a[i]);
// }

// for(int j=0;j<n;j++){
//    // printf("%d",c);
//     c=0;

// while(a[j]>0){
// d=a[j]%10;
// a[j]=a[j]/10;
// c++;
// }
// if(c%2==0){
//     k++;    
// }
// }
// printf("%d",k);
// return 0;
// }


// #include<stdio.h>
// int main(){
// int a[50],n,c,d,k=0;
// printf("enter limit...\n");
// scanf("%d",&n);

// printf("enter n element of array...");
// for(int j=0;j<n;j++){
//    scanf("%d",&a[j]);
//     c=0;
// while(a[j]>0){
// d=a[j]%10;
// a[j]=a[j]/10;
// c++;
// }
// if(c%2==0){
//     k++;    
// }
// }
// printf("%d",k);
// return 0;
// }

#include<stdio.h>
int count(int a[50],int n){
    int c=0,d,k=0;   
for(int j=0;j<n;j++){
   // printf("%d",c);
    c=0;

while(a[j]>0){
d=a[j]%10;
a[j]=a[j]/10;
c++;
}
if(c%2==0){
    k++;    
}
}
return k;
}
int main(){
int a[50],n,e;
printf("enter limit...\n");
scanf("%d",&n);

printf("enter n element of array...");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
e=count(a,n);
printf("%d",e);
return 0;
}



