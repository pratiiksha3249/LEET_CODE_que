// #include<stdio.h>
// int main()
// {
//    int t=0, f=0,j,n,k,i,a[50],p;
//    printf("enter limt...");
//    scanf("%d",&n);
//    printf("enter array elements......\n");
//    for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//    }
//    for( k=0;k<n;k++){
//    for( j=0;j<n;j++){
    
//     if(a[j]>a[j+1]){
//         t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
         
//     }
//    }   
//    }

// int val=0;

//    for(p=0;p<n;p++){
//              if(a[p]!=a[p+1]-1){
             
             
//               val=a[p];
//               f=1;
//             //   printf("%d...",a[p]);
//                break;
//              }
//     }
    
//    if(f==1){
// printf("the missing values is...%d",val+1);
//    }
//    else{
//    printf(" not missing values in array...%d",a[n]+1);

//    }
//    return 0;
// }


#include<stdio.h>
int main()
{
   int t=0, f=0,j,n,k,i,a[50],p;
   printf("enter limt...");
   scanf("%d",&n);
   printf("enter array elements......\n");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
     for( k=0;k<n;k++){
          for( j=0;j<n;j++){
    
               if(a[j]>a[j+1])
               {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
         
               }

           }   
   }
   printf("\n sorted array is....");
   for(i=0;i<n;i++){
   printf("%d\t",a[i]);
   }
   


   return 0;
}
