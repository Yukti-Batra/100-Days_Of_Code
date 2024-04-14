#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this-> data=data;
        this-> next=NULL;
    }
};
void InsertAtHead(Node* &head,int data){

    //initializing new node
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* &tail,int data){
    //make the data a node
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void InsertInMiddle(Node* &head,Node* &tail,int position, int data){
    //Starting Case
    if(position==1){
        InsertAtHead(head,data);
        return;
    }
    Node* temp=head;
    int count=1;//at head
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail, data);
        return;
    }
    Node* nodeToInsert= new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
int main(){
    Node* node1 = new Node(10);
    //make node1 as head
    Node* head=node1;
    print(head);
    InsertAtHead(head,12);
    print(head);
    Node* tail=node1;
    print(head);
    InsertAtTail(tail,15);
    print(head);

}