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

int main() {
    node *start;
    start=create_poly();
    traverse(start);
	

}
   
