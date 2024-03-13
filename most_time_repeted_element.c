// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a[100],n,c=0,c2=0,i,p;
//     printf("enter limit........");
//     scanf("%d",&n);
//     printf ("enter array elements....");
//     for(i=0;i<n;i++){
        
//         scanf("%d",&a[i]);
//     }    
// for(int k=0;k<n;k++){
// if(a[k]==a[k+1]){
//     c2++;
//     printf("%d",a[k]);
//     break;
// }
// }
// }

//printf("%d",c2);


// return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a[100],n,c1=0,c2=0,c3=0,i,p,k;
//     printf("enter limit........");
//     scanf("%d",&n);
//     printf ("enter array elements....");
//     for(i=0;i<n;i++){
        
//         scanf("%d",&a[i]);
//     } 
     
// for( k=0;k<n;k++){
//     c1=0;
//     if(c2>c1){
//         c1=0;
//      c1=c2;
//      printf("%d\t",c1);
//     }
    
// for(p=0;p<n;p++){
// if(a[k]==a[k+1]){
//     c1++;
// }
// }
// c2=c1;
// }
// //printf("%d",c1);
// return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],n,c1=0,c2=0,c3=0,i,p,k;
    printf("enter limit........");
    scanf("%d",&n);
    printf ("enter array elements....");
    for(i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    } 

     
for( k=0;k<n;k++){
    c1=0;
    if(c1<c2){
        c2=c1;
    }
 if(a[k]==a[k+1]){
           c1++;
           c2=c1;
 }

 
    }
    printf("%d",c2);
 
return 0;
}

