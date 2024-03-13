/*
#include<stdio.h>
int main()
{
   int n,i,j,a[50];
   printf("enter limt...");
   scanf("%d",&n);
   printf("enter array elements......\n");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    
   }
   int k=0;
   for(i=0;i<n-2;i++){
       if(a[0]==9){
           
           k=1;
           break;
       }
   }

   if(k==1){
    printf("10");
   }
   
    for(i=0;i<n-1;i++){
        printf("%d\t",a[i]);

    }
   
   for(i=0;i<n;i++){
    if(a[n-1]!=9){
        printf("%d\t",a[n-1]+1);
        
        break;
    }
   }
   
   int f=0;
   for(i=0;i<n;i++){
    if(a[n-1]==9){
        a[n-1]=0;
        a[n-2]=a[n-2]+1;
        f=1;
        break;
        
     }
   } 
   if(f==1){
   for(i=0;i<n;i++){
         printf("%d",a[i]);
   }
   }
   if(f!=1){
   for(i=0;i<n-1;i++){
    printf("%d",a[i]);
   }
   }
   if(f!=1){
    for(i=0;i<n;i++){

           if(a[i]>0){
      printf("%d",a[n-1]+1);
           }
    
   }
    
   }
//  for(int k=0;k<n;k++){
//  if(a[0]==9 && a[n-1]){
//         printf("10");       
//       break;
//     }
//  }

        return 0;
   }
*/

#include<stdio.h>
int main()
{
   int n,i,j,a[50],k=0,f=0;
   printf("enter limt...");
   scanf("%d",&n);
   printf("enter array elements......\n");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    
   }
   
   for(i=0;i<n-2;i++){
       if(a[0]==9){
           
           k=1;
           break;
       }
   }

   if(k==1){
    printf("10");
   }
   
    for(i=0;i<n-1;i++){
        printf("%d\t",a[i]);

    }
   
   for(i=0;i<n;i++){
    if(a[n-1]!=9){
        printf("%d\t",a[n-1]+1);
        
        break;
    }
   }
   
   
   for(i=0;i<n;i++){
    if(a[n-1]==9){
        a[n-1]=0;
        a[n-2]=a[n-2]+1;
        f=1;
        break;
        
     }
   } 
   if(f==1){
   for(i=0;i<n;i++){
         printf("%d",a[i]);
   }
   }
   if(f!=1){
   for(i=0;i<n-1;i++){
    printf("%d",a[i]);
   }
   }
   if(f!=1){
    for(i=0;i<n;i++){

           if(a[i]>0){
      printf("%d",a[n-1]+1);
           }
    
   }
    
   }
//  for(int k=0;k<n;k++){
//  if(a[0]==9 && a[n-1]){
//         printf("10");       
//       break;
//     }
//  }

        return 0;
   }






