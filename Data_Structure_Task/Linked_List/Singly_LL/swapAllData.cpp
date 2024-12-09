#include<iostream>
using namespace std;
class Node{
          public:int data;
          Node*next;

          Node(int data){
            this->data=data;
            this->next=NULL;
          }
};
void createHead(Node* &head,int val){
    Node*newnode= new Node(val);
    newnode->next=head;
    head=newnode;

}
void insertNode(Node* &tail,int val){
   Node*newnode=new Node(val);
   tail->next=newnode;
   tail=newnode;
}
void disp(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
    }
}
 void swapList(Node* &head){

Node*temp,*temp1;
int i,d;
cout<<"hellow.."<<endl;
for(i=0,temp=head;i<4,temp!=NULL;i++,temp=temp->next){

    temp1=temp->next;

    d=temp1->data;
    temp1->data=temp->data;
    temp->data=d;

cout<<temp->data<<" ";
cout<<temp1->data<<" ";
}

// disp(head);
}
 

int main(){
Node *node=new Node(10);
Node *head=node;
Node *tail=node;
insertNode(tail,20);
insertNode(tail,30);
insertNode(tail,40);
disp(head);
cout<<endl<<"swaped list is :"<<endl;
swapList(head);
// disp(head);
}