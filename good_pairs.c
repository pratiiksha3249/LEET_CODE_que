// #include<stdio.h>
// int main()
// {
//    int n,i,j,c=0,a[50];
//    printf("enter limt...");
//    scanf("%d",&n);
//    printf("enter array elements......\n");
//    for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//    }

// for(i=0;i<n;i++){
// for(j=0;j<n;j++){
//     if(a[i]==a[j] && i<j)
//     {
//         c++;
//     }
// }
// }


// printf("good pairs......%d",c);

//     return 0;
// }


#include<stdio.h>
int count(int a[],int n)
{

    int c=0,j,k;
for(j=0;j<n;j++){
for(k=0;k<n;k++){
    if(a[j]==a[k] && j<k)
    {
        c++;
    }
}
}

return c;
}

int main()
{
   int n,i,j,a[50];
   printf("enter limt...");
   scanf("%d",&n);
   printf("enter array elements......\n");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 
  }
int c = count(a,n);
   printf("%d",c);

  return 0;
}


