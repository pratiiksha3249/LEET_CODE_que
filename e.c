#include<stdio.h>
int main(){
 char s3[20],i;
printf("string in upper case str....");
gets (s3);

 for(i=0; s3[i]!='\0'; i++){
    if(s3[i]>='a'  &&  s3[i]<='z'){
      s3[i]=s3[i]-32;  
    }
}
printf("str.....\n");
for( i=0;s3[i]!='\0';i++){
}
printf("%s",s3);

  return 0;
}