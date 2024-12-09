#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};


void insertnewnodeathead(Node * &head, int v){ 
   Node * temp = new Node(v);
   temp->next = head;
   head = temp;
}


void display(Node * &head){
    Node * temp = head;
     while (temp!=NULL)
     {
        cout<<temp->data<<"->";
        temp = temp->next;
     }
     cout<<"Null"<<endl;
     
}

void insertAtEnd(Node *&head, int poss){
    Node*temp=head;
    Node*temp1=new Node(poss);
    // if(temp->next==NULL){
        while(temp->next!=NULL){
             temp=temp->next;
        }
                 temp->next=temp1;
                //  temp1->next=NULL;
    }

// }
 void insertAtAnyPoss(Node *&head,int poss1,int val){

            Node*temp=head;

            Node*temp1=new Node(val);

            for(int i=1;i<poss1-1;i++){
                temp=temp->next;

                       
            }
            temp1->next=temp->next->next;
            temp->next->next=temp1;



}

int main(){

 Node * n= new Node(10);
 int val=88,poss1=2;

 insertnewnodeathead(n, 40);
 insertnewnodeathead(n, 50);
 insertnewnodeathead(n, 60);
 display(n);
 insertAtEnd(n,3);
 display(n); 
 insertAtAnyPoss(n,poss1,val);
 display(n); 
return 0;
}
