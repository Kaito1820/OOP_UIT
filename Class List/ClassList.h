#pragma
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    LinkedList(){
        this->head = nullptr;
        this->tail = nullptr;
    } 
};