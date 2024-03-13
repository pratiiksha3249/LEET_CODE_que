// #include<stdio.h>
// int main()
// {
//     int a[100],n,c=0,i,p,b;
//     printf("enter limit........");
//     scanf("%d",&n);
//     printf ("enter array elements....");
//     for(i=0;i<n;i++){
        
//         scanf("%d",&a[i]);
//     }
//     for( p=0;p<n;p++){
//         if(a[p]==a[p+1]){
//             c++;
//              a[b]=a[p];
            
//         }
    
        
//     }
// if(c<1){
// printf("%d",a[b]);
// }    
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],n,c=0,i,p,b,m;
    printf("enter limit........");
    scanf("%d",&n);
    printf ("enter array elements....");
    for(i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    }    
    for(p=0;p<n;p++){        
        c=0;
        for(m=0;m<n;m++){
        if(a[p]==a[m]){
            c++;
        }   
        }
              if(c<=1){
        printf("%d\t",a[p]) ;
        }     
    }
   return 0;
}