#include<stdio.h>
int main()
{
int k,i,j,kk=0,jj=0,f=0,n,sum,a[10];
printf("enter limit...");
scanf("%d",&n);

printf("enter array elements...");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

printf("\n enter sum to serach......");
scanf("%d",&sum);

printf("\n after put 0 value....\n ");
for(int u=0;u<n;u++){
    printf("%d\t",a[u]);
}
for(int y=0;y<n;y++){
if(sum==a[y]){
    a[y]=0;
}
}
for(j=0;j<n;j++){
for(k=0;k<n;k++){
    if(a[j]+a[k]==sum){
        
        jj=j;
        kk=k;
        f=1;
        break;

    }
    if(f==1){
        break;
    }
}
}


printf("\n sum of index==%d",jj+kk);


return 0;
}







