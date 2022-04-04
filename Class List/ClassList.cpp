#include <iostream>
#include "ClassList.h"
using namespace std;

Node::Node(double data){
    this->data = data;
    this->next = nullptr;    
}

LinkedList::LinkedList(){
    this->size = 0;
    this->head = nullptr;
    this->tail = nullptr;
}

void LinkedList::insert_node(double node_data){
    Node* node = new Node(node_data);
    if(this->head == nullptr){
        this->head = node; 
    }
    else{
        this->tail->next = node;
    }
    
    this->tail = node;
    this->size++;
}

void LinkedList::pop_head(){
    if(this->head != nullptr){
        Node *p = this->head;
        this->head = p->next;
        delete p;
    }
}

void LinkedList::delete_x(double x){
    Node *p = this->head;
    if(!p) return;
    while(p != nullptr){
        if(p->next->data == x){
            Node *temp = p->next;
            p->next = temp->next;
            delete temp;
            this->size--;
        }
        p = p->next;
    }
}

void LinkedList::replace_x(unsigned int pos, double y){
    Node *p = this->head;
    if(!p || pos < this->size-1 || pos >= this->size) return;
    unsigned int i = 0;
    while(p != nullptr){
        if(i == pos){
            p->data = y;
            break;
        }
        i++;
        p = p->next;
    }
}

void LinkedList::output(){
    Node *p = this->head;
    if(!p) cout << '[';
    while(!p){
        if(!p->next) cout << p->data << ']';
        else cout << p->data << ',';
    }
}

void xuli(LinkedList* llist){
    int n;
    do{
        double x;
        cin >> n;
        if(!n){
            cin >> x;
            llist->insert_node(x);
        }
        else if(n == 1) llist->pop_head();
        else if(n == 2){
            cin >> x;
            llist->delete_x(x);
        }
        else if(n == 3){
            unsigned int pos;
            cin >> pos;
            cin >> x;
            llist->replace_x(pos, x);
        }
        else if(n == -1){
            llist->output();
        }
    }while(n != -1);
}