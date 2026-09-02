#include <iostream>

using namespace std;

class node {
    public: int info;
    node * link;
    node(int value) {
        info = value;
        link = NULL;
    }
};
node * create_node(int value) {
    node * ptr;
    ptr = new node(value);
    return (ptr);
}

create_cll() {
    int value;
    cin >> value;
    node * ptr, * nptr, * start;
    ptr = create_node(value);
    start = ptr;
    int choice;
    cin >> choice;
    while (choice == yes) {
        cin >> value;
        nptr = create_node(value);
        ptr -> link = nptr;
        ptr = nptr;
    }
    ptr -> link = start;

}

void traverse(node*& start){
    node *temp;
    temp=start;]
    while(temp ->link !=start){
        cout<<temp ->info<< " ";
        temp=temp ->link;
    }
    cout<< temp ->info;
}

void insert_beg(node*& start){
    int value;
    cin>>value;
    node *temp,*nptr;
    nptr=create_node(value);
    temp=start;
    while(temp ->link!=start){
        temp= temp ->link;
        
    }
    temp ->link=nptr;
    nptr ->link =start;
    start=nptr;
    
}
void insert_end(node*& start){
    int value;
    cin>>value;
    node *temp,*nptr;
    nptr=create_node(value);
    temp=start;
    while(temp ->link!=start){
        temp= temp ->link;
        
    }
    temp ->link=nptr;
    nptr ->link =start;

int main() {
    node *start;
    start=create_cll();
    traverse(start);
    insert_beg(start);
    traverse
}