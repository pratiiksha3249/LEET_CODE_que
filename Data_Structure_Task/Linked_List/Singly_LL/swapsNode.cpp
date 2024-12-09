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

Node*temp,*temp1=temp->next;
int i;
for(i=0,temp=head;i<2,temp->data!=40;i++,temp=temp->next){
          temp->next=temp1->next;
        //   temp->next=NULL;
          temp1->next=temp;
        cout<<temp->data<<" ";
}
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