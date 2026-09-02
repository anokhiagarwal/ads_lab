#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int coeff, expo;
    node * link;
    node (int a, int b){
        coeff=a;
        expo=b;
        link=NULL;
    }
};
node * create_node(int a, int b){
    node * ptr;
    ptr= new node(a,b);
    return ptr;
    
}

node *create_poly(){
    int c,e;
    cin>>c>>e;
    node *ptr ,*nptr, *start;
    ptr=create_node(c,e);
    start=ptr;
    int ch;
    cin>>ch;
    while(ch==1){
        cin>>c>>e;
        nptr=create_node(c,e);
        ptr -> link=nptr;
        ptr= nptr;
        cin>>ch;
        
    }
    return start;
}
void traverse(node*&start){
    node*temp;
    temp=start;
    while(temp!=NULL){
        if(temp->coeff<0){
            
        
        cout<<temp->coeff<<"X"<<temp->expo;
        }
        else{
            cout<<"+"<<temp->coeff<<"X"<<temp->expo;
        }
     temp=temp->link;
}
}
 node*addition(node*&start1, node*&start2){
    node *temp1, *temp2, *start, *nptr, *ptr;
    int coeff, expo;
    temp1= start1;
    temp2=start2;
    start=NULL;
    while(temp1 !=NULL and temp2 !=NULL){
        if(temp1 ->expo == temp2 ->expo){
            coeff=temp1 -> coeff +temp2 -> coeff;
            expo=temp1 ->expo;
            temp1= temp1 ->link;
            temp2= temp2 ->link;
            
        }
        else if(temp1 ->expo> temp2 -> expo){
            coeff=temp1 -> coeff;
            expo= temp1 -> expo;
            temp1=temp1 ->link;
        }
        else{
            coeff = temp2->coeff;
            expo=temp2->expo;
            temp2=temp2 ->link;
        }
        nptr=create_node(coeff,expo);
        if (start==NULL){
            start=nptr;
            ptr=nptr;
        }
        else{
            ptr ->link=nptr;
            ptr=nptr;
        }
        
    }
    if (temp1 !=NULL and temp2==NULL){
        ptr ->link=temp1;
    }
    if(temp1== NULL and temp2 !=NULL){
        ptr->link=temp2;
    }
    return start;
    
}
int main() {
    node*start1,*start2,*start;
    start1=create_poly();
    traverse(start1);
    cout<<endl;
    start2 =create_poly();
    traverse(start2);
    start=addition(start1,start2);
    cout<<endl;
    traverse(start);


}
