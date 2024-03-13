// // #include<stdio.h>
// // #include<string.h>
// // int main()
// // {
// // char s[100][100];
// // int n,flag=0;
// // printf("enter limit...");
// // scanf("%d",&n);
// // printf("enter a string....");
// // for(int j=0;j<n;j++){
// //     scanf("%s",&s[j]);
// // }

// // printf("string is....");
// // for(int i=0;i<n;i++){
// //        if(strcmp(s[i],s[i+1])==0){
// //         flag=1;
// //         break;
// //        }



// //        if(flag==1){
// //       printf("%s\t",s[i]);
// //        }
// //        else{
// //         printf("not same...");
// //        }
// // }



// //     return 0;
// // }

#include<stdio.h>
#include<string.h>
int main()
{
char s[100][100];
int n,flag1=0,flag2=0;
printf("enter limit...");
scanf("%d",&n);

printf("enter a string....");
for(int j=0;j<n;j++){
    scanf("%s",&s[j]);
}


printf("string is....");
for(int i=0;i<n;i++){
printf("%d\t",s[i]);
}

    return 0;
}

// #include <stdio.h>
// int main()
// {
// int k; // variable declaration.
// for(int k=0;k<=255;k++) // for loop from 0-255.
// {
// printf("\nThe ascii value of %c is %d", k,k);
// }
// }





