
#include<stdio.h>
int main()
{
   int n,i,j,a[50],temp,c[20],cnt,max,id;
   printf("limit for an array...");
   scanf("%d",&n);
   printf("give me elements......\n");
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    
   }
   for(i=0;i<n;i++)
   {
       temp=a[i];
       cnt=0;
       for(j=0;j<n;j++)
       {
        if(a[j]==temp)
            cnt++;
       }
       c[i]=cnt;
       printf("\n %d is %d times\n",temp,cnt);
   }
   for(i=0;i<n;i++)
      printf("\t %d",c[i]);
      //To find maximum count
      id=0;
   max=c[0];
   for(i=1;i<n;i++)
   {
      if(c[i]>max)
      {
        max=c[i];
        id=i;
      }
   }
 printf("\n %d is %d times",a[id],c[id]);

}
