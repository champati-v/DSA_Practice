#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<< "Memory is free for node with data: " << value << endl;
    }
};

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    
    Node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    //inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    //create a node for data to be inserted
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(position == 1){
        //deleting first node
        Node* temp = head;
        head = head -> next;
        //memeory free start node
        temp -> next = NULL;
        delete temp;
        // if list became empty, update tail
        if(head == NULL){
            tail = NULL;
        }
    }

    else {
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while(count < position){
            prev = curr; 
            curr = curr -> next;
            count++;
        }

        prev -> next = curr -> next;
        // if deleting last node, update tail
        if(prev->next == NULL){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertAtTail(tail, 10);
    print(head);
    insertAtTail(tail, 20);
    print(head);
    insertAtTail(tail, 30);
    print(head);

    insertAtPosition(head, tail, 5, 40);
    print(head);

    cout<< "Head: " << head -> data << endl;
    cout<< "Tail: " << tail -> data << endl;

    deleteNode(head,tail, 3);
    print(head);

    cout<< "Head: " << head -> data << endl;
    cout<< "Tail: " << tail -> data << endl;
} 