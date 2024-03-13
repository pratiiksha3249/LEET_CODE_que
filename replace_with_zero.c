// for(int i=0;i<6-1;i++){
//     if(a[i]==0){
//           t=a[i];
//           a[i]=a[b];
//           a[b]=t;
//     printf("%d\t",a[i]);
//           b--;
          
//     }
//     // else{
             
//     // printf("%d\t",a[i]); 
//     // }
// }

 //int t=0,b=5,a[20]={5,0,11,0,8,12};
//a[20]={5,0,11,0,8,12}

// for(int i=0;i<6;i++)
// {
//     t=a[0];
//     a[0]=a[b];
//     a[b]=t;
//     printf("%d\t",a[i]);
//     //printf("%d\t",t);
// }
#include<stdio.h>
int main(){
 int c=0,n=5,a[20]={5,10,0,0,0,12};

for(int i=0;i<6;i++){
         if(a[i]!=0){
            printf("%d\t",a[i]);
            c++;
         }
}
n=n-c;
for(int i=0;i<=n;i++){
printf("0\t");
}


    return 0;
}



