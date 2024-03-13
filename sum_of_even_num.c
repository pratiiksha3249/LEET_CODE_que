// #include<stdio.h>
// int main()
// {
//     int i,n,sum=0,a[100];
//     printf("enter limit..");
//     scanf("%d",&n);
//     printf("enter n elements");
//     for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         if(a[i]%2==0){
//             sum=sum+a[i];
//         }
//     }
// printf("/n even num sum...%d",sum);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int i,n,sum=0,a[100];
    printf("enter limit..");
    scanf("%d",&n);
    printf("enter n elements");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
return 0;
}

