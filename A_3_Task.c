#include<stdio.h>
int main(){
int n1,n2,f=0,sum=0;
printf("enter first num=");
scanf("%d",&n1);
printf("enter secound num=");
scanf("%d",&n2);
for(int i=n1;i<=n2;i++){
      f=0;
    for (int j=2;j<i;j++){
      if(i%j==0){
   f=1;
   break; 
}
}

if(f==0)
sum=sum+i;
}
printf("%d ",sum);

    return 0;
}



/*
#include<stdio.h>
int main(){
int n,c=0;
printf("Enter number...");
scanf("%d",&n);
for(int i=1;i<=n;i++){
     if(n%i==0){
        c++; 
     }    
}
if(c==2){
    printf("number is prime");
}
else{
    printf("number is not prime");
}
    return 0;
}


*/







/*
#include<stdio.h>
int main(){
int n1,n2,s=0;
printf("enter first num=");
scanf("%d",&n1);
printf("enter secound num=");
scanf("%d",&n2);


for(int i=n1;i<=n2;i++){
if(i%2==1){
    s=s+i;
}
}
printf("prime num sum=%d",s);


    return 0;
}

*/
/*
#include<stdio.h>
int main(){
int n1,n2,j,s=0;
printf("enter first num=");
scanf("%d",&n1);
printf("enter secound num=");
scanf("%d",&n2);


for(int i=n1;i<=n2;i++){
    for(j=1;j<=i;j++){
if(i%j==0){
    s=s+i;
}
}
}
printf("prime num sum=%d",s);


    return 0;
}
*/
/*
#include<stdio.h>
int main(){
int n1,n2,s=0;
printf("enter first num=");
scanf("%d",&n1);
printf("enter secound num=");
scanf("%d",&n2);


for(int i=n1;i<=n2;i++){
if(i%i==0){
    s=s+i;
}
}
printf("prime num sum=%d",s);


    return 0;
}
*/