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

void insertnewnodeathead(Node * &head, int v){ // n->n1->n2->n3->null
    // |40->null| == temp // head = |10=>null|
   Node * temp = new Node(v);//isolated |40|->null
//    cout<<" temp cha next "<<temp->next<< " temp node chi value"<< temp->data<<endl;
   //head->null  // temp->head->null
   temp->next = head;
   //
   head = temp;
}

// void insertnewnodeatend(Node * &head, int v){
//    Node * temp = head;
      
// }
// void insertathead(Node * &head , int v){

//     Node * temp = new Node(v);
//     temp->next = head;
//     head = temp;
    
// }

void display(Node * &head){
    Node * temp = head;
     while (temp!=NULL)
     {
        cout<<temp->data<<"->";
        temp = temp->next;
     }
     cout<<"Null"<<endl;
     
}

// void delnode(Node * &head, int poss ){
//    Node * temp = head;
//    for(int i=1;i<3;i++){
//       temp = temp->next;
//    }
//    //60->50->40->1000
//    cout<<temp->data<<" delet node "<<endl;
//    temp->next = temp->next->next;
// }

void insertatend(Node * &head, int v){
    Node * temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->data = v;
    temp->next = NULL;  
}


int main(){

 Node * n= new Node(10);

//  Node * head = n;
 insertnewnodeathead(n, 40);
 insertnewnodeathead(n, 50);
 insertnewnodeathead(n, 60);
 display(n);
 display(n);

//  cout<<n->data<<" "<<n->next->data<<" "<<n->next->next->data<<" "<<n->next->next->next->data<<endl;
 
return 0;
}