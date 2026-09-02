c

void delete_loc(node * & start){
    int loc;
    cin>>loc;
    node *temp, *temp1;
    int k=1;
    temp=start;
    while(k!=loc-1){
        temp=temp ->link;
        k=k+1;
        
    }
    temp1=temp -> link;
    temp -> link = temp1 ->link;
    delete temp1 ;
}


int main() {
    node * start;
    start = create_sll();
    traverse(start);
    delete_loc(start);
    traverse(start);
    

}