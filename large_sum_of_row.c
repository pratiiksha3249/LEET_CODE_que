// #include<stdio.h>
// int main(){
// int i,j,r,c,a[100][100],s=0,max=0;
// printf("enter limit for row....");
// scanf("%d",&r);
// printf("enter limit for col....");
// scanf("%d",&c);
// printf("enter n array element...\n");
// for(i=0;i<r;i++)
// {
//     for(j=0;j<c;j++){
//       scanf("%d",&a[i][j]);
//     }
// }
// for(i=0;i<r;i++)
// {
//     s=0;
//     for(j=0;j<c;j++){
//       s=s+a[i][j]; 
      
//     }
//     if(s>max){
//       max=s;
//       }
// }

// printf("max row sum is =%d",max);

// return 0;
// }

#include<stdio.h>
int main(){
int i,j,r,c,a[100][100],s=0,max=0;
printf("enter limit for row....");
scanf("%d",&r);
printf("enter limit for col....");
scanf("%d",&c);
printf("enter n array element...\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++)
{
    s=0;
    for(j=0;j<c;j++){
      s=s+a[i][j]; 
      if(s>max){
      max=s;
      }
    }
}

printf("max row sum is =%d",max);

return 0;
}