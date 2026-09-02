#include <iostream>
using namespace std;

class Queue {
    int queue[5];
    int front, rear;

public:

    void initialize() {
        front = -1;
        rear = -1;
    }

    void Enqueue(int info) {
        if (rear == 4) {
            cout << "Queue is full";
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = info;
    }

    void Dequeue() {
        if (IsEmpty()) {
            cout << "Queue is empty";
            return;
        }

        cout << "Deleted: " << queue[front];
        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }

    void Display() {
        if (IsEmpty()) {
            cout << "Queue is empty";
            return;
        }

        cout << "Queue: ";

        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
    }

    bool IsEmpty() {
        return front == -1;
    }

    bool IsFull() {
        return rear == 4;
    }
};
int main(){
    Queue Q;
    Q.initialize();
    int ch, info;
    do{
        cout<<"\n1>Enqueue"
        cout<<"\n2>Dequeue"
        cout<<"\n3>Display"
        cout<<"\n4>]IsEmpty"
        cout<<"\n5>IsFull"
        cout<<"\n6>Exit"
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch (ch){
            case 1:
                cout<<"\nEnter the element to be inserted: ";
                cin>>info;
                Q.enqueue(info);
                break;
            case 2:
                info=Q.dequeue();
                if(info!=-1)
                    cout<<"\nDeleted element is: "<<info;
                break;
            case 3:
                Q.display();
                break;
            case 4:
                if(Q.isEmpty())
                    cout<<"\nQueue is empty";
                else
                    cout<<"\nQueue is not empty";
                break;
            case 5:
                if(Q.isFull())
                    cout<<"\nQueue is full";
                else
                    cout<<"\nQueue is not full";
                break;
            case 6:
                cout<<"\nExiting...";
                break;
            default:
                cout<<"\nInvalid choice!";
        }
    }
}