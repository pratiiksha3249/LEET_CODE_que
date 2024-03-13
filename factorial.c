#include<stdio.h>
int main(){

int  num,f=1;
printf("enter num of factorial....");
scanf("%d",&num);
for (int i=num;i>=1;i--){
f=f*i;

}
printf("factorial of number....%d",f);
    return 0;
}