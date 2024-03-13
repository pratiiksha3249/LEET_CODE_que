/*write a function program that return square root 
given number if input is 30 then  it shoud return 5 because
 30 ka square root 5.somthing hoga toh 5 print hona chahiye if
  input hoga 16 toh uska square root 4 aise if input hoga 50 toh uska
   square root hai 7.somthing toh uska output 7 aana chahiye*/

#include <stdio.h>
int main()
{
    int num, f = 1;
    printf("enter num........");
    scanf("%d", &num);
    // s=num*num;
    // printf("%d",s);
    
        for (int j = 1; j < num; j++)
        {

            if (j * j == num)
            {
                printf("%d", j);
                f = 1;
                break;
            }
        }
    
    return 0;
}

/*
#include<stdio.h>
int main(){
    int num, ans;
printf("enter num........");
scanf("%d",&num);
for(int i=1;i<num;i++){
    
 if(i*i <= num){
    ans = i;
 }
 else{
    break;
 }
}
printf("%d", ans);

    return 0;
}
*/