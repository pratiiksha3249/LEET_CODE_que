// #include<stdio.h>
// int main(){
// int a,b,c,sum=0;
// printf("enter first number...");
// scanf("%d",&a);

// printf("enter sec number...");
// scanf("%d",&b);

// printf("enter thr number...");
// scanf("%d",&c);

//  int a1=a*a;
// int b1=b*b;
// int c1=c*c;
// sum=a1+b1;
// if(sum==c1)
// printf ("number is pythagorean");
// else{
//    printf ("number is not pythagorean");
 
// }

//     return 0;
// }

#include<stdio.h>
 void pythagorean(int a,int b, int c){
int a1,b1,c1,sum=0;
 a1=a*a;
 b1=b*b;
 c1=c*c;
sum=a1+b1;
if(sum==c1)
printf ("number is pythagorean");
else{
   printf ("number is not pythagorean");

}
}
int main(){
int a,b,c,sum=0;
printf("enter first number...");
scanf("%d",&a);

printf("enter sec number...");
scanf("%d",&b);

printf("enter thr number...");
scanf("%d",&c);
pythagorean(a,b,c);

    return 0;
}
