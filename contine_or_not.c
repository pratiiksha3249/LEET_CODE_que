// #include<stdio.h>
// int main()
// {
// int a[20]={11,22,33,44},i;

// for(i=0;i<4;i++){
//    if(a[i]==a[i]+1 && a[i+1]==a[i]+2)
//    printf("true");
//     else{
//         printf("false");
//         break;
//     }

// }

//     return 0;
// }

//contine or not a[1 2 3 4]=true
//a[1,2,7]=false
#include<stdio.h>
int main()
{
int a[20]={1,2,3,4,5,7,8,9,3},i;

for(i=0;i<9;i++){
 if(a[i+1]==a[i]+1)
continue;

else{
    printf("%d",a[i]);
    break;
}
}
    return 0;
}
