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
node * create_sll() {
    int value;
    cin >> value;
    node * ptr, * nptr, * start;
    ptr = create_node(value);
    start = ptr;
    int ch;
    cin >> ch;
    while (ch == 1) {
        cin >> value;
        nptr = create_node(value);
        ptr -> link = nptr;
        ptr = nptr;
        cin >> ch;
    }
    return start;
}
void traverse(node * temp) {
    while (temp != NULL) {
        cout << temp -> info << " ";
        temp = temp -> link;
    }
}

void insert_beg(node * & start1) {
    int value;
    cin >> value;
    node * nptr;
    nptr = create_node(value);
    nptr -> link = start1;
    start1 = nptr;
}

void insert_end(node * & start1) {
    int value;
    cin >> value;
    node * nptr, * temp;
    nptr = create_node(value);
    temp = start1;
    while (temp -> link != NULL) {
        temp = temp -> link;
    }
    temp -> link = nptr;
}

void insert_loc(node * & start1){
    int value;
    cin>>value;
    node * nptr, *temp;
    nptr=create_node(value);
    int loc;
    cin>>loc;
    temp=start1;
    int k=1;
    while(k!=loc-1){
        k=k+1;
        temp=temp ->link;
        
    }
    nptr -> link=temp -> link;
    temp -> link =nptr;

}

int main() {
    node * start;
    start = create_sll();
    traverse(start);
    insert_beg(start);
    traverse(start);
    insert_end(start);
    insert_loc(start);
    traverse(start);
    

}