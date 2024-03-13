// #include<stdio.h>
// int main(){
// int i,j,a[20][20],n;
// printf("enter row and col limit...");
// scanf("%d",&n);
// printf("enter row and col element...");
// for(i=0;i<n;i++)
// {
//     for(j=0;j<n;j++)
// scanf("%d",&a[i][j]);
// }
// for(i=0;i<n;i++)
// {
//     for(j=0;j<n;j++)
    
// printf("%d",a[i][j]);
// }

//     return 0;
// }

#include<stdio.h>
#include<conio.h>
int main(){
int a[10][10],b[10][10],i,j,r,c,ans[10][10];
printf ("enter row and column......");
scanf("%d%d",&r,&c);

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
printf ("enter secound matrix.......");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      
      ans[i][j]=a[i][j]+b[i][j];
    }
}
printf ("\n addition of matrix.......\n");
for (i=0;i<r;i++){
    for (j=0;j<r;j++){
        printf ("%d\t",ans[i][j]);
    }
    printf ("\n");
}
    return 0;
}
