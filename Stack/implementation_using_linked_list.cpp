#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    
    Node(int value){
        data=value;
        next=nullptr;
    }
};
void Push(Node* &top, int head ){
    Node*temp= new Node(head);
    temp->next=top;
    top=temp;
    cout<<head;
}

int Pop(Node * &top){
    if(top==NULL){
        cout<<"Stack iks empty";
        return -1;
    }
    Node*temp=top;
    int head=temp->data;
    top=top->next;
    delete temp;
    cout<<head;
    return head;
}

int Peek(Node* top){
    if(top==NULL){
        cout<<"stack is empty";
        return -1;
    }
    return top->data;
}
void traverse(Node*top ){
    cout<<"Stack:";
    Node*temp=top;
    while(temp!=NULL){
         temp=temp->next;
    }
    cout<<"NULL";
    
}
int main(){
    Node* top=NULL;
    Push(top,10 );
    cout<<" ";
    Push(top,20 );
    cout<<" ";
    Push(top,30 );
    cout<<" "<<endl;
    traverse(top);
    cout<<" "<<endl;
    Push(top,40 );
    cout<<" "<<endl;
    cout<<"Top element is "<<Peek(top);
    cout<<" "<<endl;
    Pop(top);
    cout<<" "<<endl;
    traverse(top);
}
