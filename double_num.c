// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a[100],n,i;
//     printf("enter limit........");
//     scanf("%d",&n);
    
//     printf ("enter array elements....");
//     for( i=0;i<n;i++){
        
//         scanf("%d",&a[i]);
//     } 

//   for(i=0;i<n;i++){
//                 if(a[i]*a[i]==a[i+1]){

//               printf("true...");
              
//         }
        
  

//         else{
//             printf("false...");
//             break;
//         }
//   }
  


// return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],n,i,j;
    printf("enter limit........");
    scanf("%d",&n);
    
    printf ("enter array elements....");
    for( i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    }
    int f=0;
        for(i=0;i<n;i++){
              for(j=0;j<n;j++){
                     if(2*a[i]==a[j]){
                    
                     //if(a[i]*a[j]==a[j]){
                        //but here a[j] and a[i] value are same
                        // bcoz both increase at same time
                        f=1;
                        break;
                     }
              }
              if(f==1){
                break;
              }
        }
        if(f==1){
        printf("true");
        }
        else{
            printf("false");
        }
        
    return 0; 

}

