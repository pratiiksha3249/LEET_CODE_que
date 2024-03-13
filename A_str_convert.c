#include<stdio.h>
int main(){
 char s1[20],s2[20],s3[20],i;
 
 printf("string vowels str....");
gets(s1);
printf("string conson.. str....");

 gets(s2);
 
 printf("string in  lower case str....");

 gets(s3);

 for(i=0;s1[i]!='\0';i++){
 if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'||
 s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'){
        s1[i]=s1[i]="*";
 }
 }
 for( i=0;s2[i];i++){
    if(s2[i]>=97 ||s2[i]<=122){
        s2[i]='@';
    }
 }
 


for(i=0; s3[i]!='\0'; i++){
    if(s3[i]>='a'  &&  s3[i]<='z'){
      s3[i]=s3[i]-32;  
    }
}

printf(" 1 str.....\n");
for( i=0;s1[i]!='\0';i++){
}
printf("%s",s1);
 
 
printf(" 2 str.....\n");
for( i=0;s2[i]!='\0';i++){
}
printf("%s",s2);
 
printf(" 3 str.....\n");
for( i=0;s3[i]!='\0';i++){
}
printf("%s",s3);
  retur;
}