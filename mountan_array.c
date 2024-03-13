#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],n,max=0;
    printf("enter limit........");
    scanf("%d",&n);
    printf ("enter array elements....");
    for( int i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    }    
for(int p=0;p<n;p++){
if(a[p]>max){
    max=a[p];
}
}
    printf("%d",max);

return 0;
}