#include<stdio.h>
int main()
{
    /*
 //int a=18,b=15;
 int a,b;
 printf("enter valuea of a....valuea of b...");
 scanf("%d%d",&a,&b);
 a=a-b;
 b=a+b;
 //printf("%d",b);
 //printf("\n%d",b-a);
 printf("values of a is...%d",a-b);
 printf(" \n values of b is......%d",b);
 */

//int a=18,b=15;
int a,b;
printf("values of a and value of b....");
scanf("%d%d",&a,&b);
a=a-b;
b=b+a;
printf("\n values of b is.....%d",b);
b=b-a;
a=0;
a=b;
printf("\n values of a is....... %d",a);

    return 0;
}