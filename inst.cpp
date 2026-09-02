#include <iostream>
using namespace std;

class node {
    public: int data;
    node * next;
    node(int value) {
        data = value;
        next = NULL;
    }
};
void display(node * temp) {
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}