// #include<stdio.h>
// #include<stdlib.h>
// #include<malloc.h>
// typedef struct node
// {
//     int data;
//     struct node *next;
// }NODE;

// NODE *top;

// void init(){
// top=NULL;

// }

// int isempty(){
// if(top==NULL){
//     return 1;
// }
// else{
//     return 0;
// }

// }
// void push(int num){
// NODE *newnode;
// newnode=(NODE*)malloc(sizeof(NODE));
// newnode->data=num;
// newnode->next=top;
// top=newnode;
// }
// int pop()
// {
       
//         NODE *temp;

//     if(isempty()){
//         printf("\n stack is empty....");

//     }
//     else{
//     temp=top;
//     top=top->next;
//     free(temp);
    
// }
// }
// void disp()
// {
//     NODE *temp;
//     for(temp=top;temp!=NULL;temp=temp->next)
//     {
//         printf("%d\t",temp->data);
//     }
// }
// int main(){
// int num,ch;
// init();
// do{
// printf("\n enter choice...");
// scanf("%d",&ch);
// switch(ch){
// case 1:printf("\n enter num to insert....");
//         scanf("%d",&num);
//         push(num);
// break;
// case 2:pop();
//       break;
// case 3:disp();
// }
// }while(ch!=4);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// typedef struct node{
//     char data;
//     struct node*next;
// }NODE;
// NODE *top;
// void init(){
//     top==NULL;
// }
// void push(char ch1){
// NODE *newnode;
// newnode=(NODE*)malloc(sizeof (NODE));
// newnode->data=ch1;
// newnode->next=top;
// top=newnode;
// }
// int isempty()
// {
//     if(top==NULL)
//     return 1;
//     else
//     return 0;
// }
// void pop()
// {
//     NODE *temp;
//     //char val[100];
//     if(isempty())
//     printf("\n stack is empty...");
//     else{
//         temp=top;
//         //val=temp->data;
//         top=top->next;

//         free(temp);
//     }
//     //return val;
// }

// void task(){   
// }



// void disp()
// {
// NODE *temp;
// for(temp=top;temp!=NULL;temp=temp->next)
// printf("%c",temp->data);

// }
// int main(){

// int ch,i;
// char ch1[100],ch2[100];
// init();

// printf("\n enter a string..");
// scanf("%s",&ch1);


// for(i=0;ch1[i]!='\0';i++)
// push(ch1[i]);
// disp();

// task();


// return 0;
// }

// #include<stdio.h>
// int main(){
// char s[100]="Tiksha",s1[100];
// int i;
// for(i=0;s[i]!='\0';i++);
// printf("\n reverce string...");
// for(i=i-1;i>=0;i--){
//     s1[i]=s[i];
// //printf("%c",s[i]);
// }

// for(i=0;s1[i]!='\0';i++){
// printf("%c",s1[i]);
// }
//     return 0;
// }


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char s[100]="ramTikshakale",s1[100]="Tikshakale";
int i,c=0,c1=0,f=0,j,cnt=0,newpos;

for(i=0;s[i]!='\0';i++){
      c++;
}

for(j=0;s1[j]!='\0';j++){
      c1++;
}

if(c>c1)
for(i=0;i<c;i++){
if(s[i]==s1[i]){
 
}
else{
   cnt++;
 
 while(){
     printf("%c",s1[i]);   
     i++; 
 }
 
}
}

// if(f==1){
//     printf("0");
//     exit(0);
// }

// if(c<c1){
// for(i=0;i<c1;i++){
// if(s[i]==s1[i]){
//    f=1;
// }
// else{
//  printf("%c",s1[i]);
// }
// }
// }

   return 0;
}

//printf("%d",c);
//printf("\n%d",c+c1);

// else{
//     printf("%c",s1[i]);
// }

// for(i=0;s1[i]!='\0';i++){
// printf("%c",s1[i]);
// }
 










