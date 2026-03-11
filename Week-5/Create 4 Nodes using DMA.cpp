#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int main(){

    Node *head,*second,*third,*fourth;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    Node *temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL";

    return 0;
}
