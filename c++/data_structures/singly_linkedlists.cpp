#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node* next;
};

void printList(Node* n) {
    while(n != NULL) {
        cout << n->value << endl;
        n = n->next;
    }
}

void insertAtFront(Node** head, int newValue) {
    // prepare a newNode
    Node* newNode = new Node();
    newNode->value = newValue;
    // put it in front of current head
    newNode->next = *head;
    // move head of list to point to the newNode
    *head = newNode;
}

void insertAtEnd(Node** head, int newValue) {
    // prepare newNode
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;
    // if list is empty, newNode will be a head node
    if(*head == NULL) {
        *head = newNode;
        return; // terminate
    }
    // find the last node
    Node* last = *head; // start at the head to find the actual last node
    while(last->next != NULL) {
        last = last->next;
    }
    // insert newNode after last node (at the end)
    last->next = newNode;
}

void insertAfter(Node* previous, int newValue) {
    // check if previous node is NULL
    if(previous == NULL) {
        cout << "previous cannot be NULL";
        return;
    }
    // prepare newNode
    Node* newNode = new Node();
    newNode->value = newValue;
    // insert newNode after previous
    newNode->next = previous->next;
    previous->next = newNode;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    second->value = 2;
    third->value = 3;

    head->next = second;
    second->next = third;
    third->next = NULL;

    printList(head); // prints [1, 2, 3]
    cout<<endl;

    insertAtFront(&head, -1);
    insertAtFront(&head, -2);
    insertAtEnd(&head, 4);
    insertAfter(second, 9);
    printList(head); // prints [-2, -1, 1, 2, 9, 3, 4]

    system("pause>0");
}