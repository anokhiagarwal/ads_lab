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



int main() {
    node * start;
    start = create_sll();
    traverse(start);
    

}