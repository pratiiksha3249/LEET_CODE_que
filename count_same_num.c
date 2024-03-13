//ip- a[1,0,1,0,1,1,1]=3
//most 3 time repeted
#include<stdio.h>
int main()
{
   //int a[20]={1,0,1,1,1,0,1,1,1,1,1};
   int a[30],i,n;
   int c1=0,c2=0;
   printf("\n enter num for limit..");
   scanf("%d",&n);
   for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
   }
    for(i=0;i<n;i++){
        if(a[i]==1 && a[i+1]==1)
        {
           c1++;
            c2++;           
        }
        else if(a[i]==0){
            if(c1>c2){
                c2=c1;
                c1=0;
            }
        }
    }
 printf("%d",c2);
 
    return 0;
}