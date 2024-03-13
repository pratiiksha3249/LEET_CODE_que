// #include<stdio.h>
// int main()
// {
// int n,a[100],i,j,c=0;
// printf("enter limit.....");
// scanf("%d",&n);
// printf("enter n elements..");
// for(i=0;i<n;i++){
// scanf("%d",&a[i]);
// }

// for(int p=0;p<n;p++)
// {
// for(j=0;j<n;j++){
// if(a[p]==a[j]){
//     c++;
// }
// }
// }
// c=c-n;

// printf("repeated num count......%d",c/2);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int n,a[100],i,j,c=0,v=0,q=0,m=0;
// printf("enter limit.....");
// scanf("%d",&n);
// printf("enter n elements..");
// for(i=0;i<n;i++){
// scanf("%d",&a[i]);
// }

// for(int p=0;p<n;p++)
// {
// c=0;
// for(j=0;j<n;j++){
// if(a[p]==a[j]){
//     c++;
    
// }
// }
// if(c>1){
//     v++;
// }
// }

// // if(c>2){
// // v=v+1;
// // }
// // else{
// //     q=q+1;
// // }
// // m=q+c;

// printf("repeated num count......%d",v);
// return 0;
// }



#include<stdio.h>
int main()
{
int n,a[100],i,j,max=0,t=0;
printf("enter limit.....");
scanf("%d",&n);
printf("enter n elements..");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

for(int p=0;p<n-1;p++)
{
for(j=0;j<n-1;j++){
if(a[j]>a[j+1]){
   t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;

}
}
}
printf("sorted array...\n");
for(i=0;i<n;i++){
scnaf("%d",a[i]);
}

return 0;
}
