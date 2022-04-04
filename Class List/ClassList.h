#pragma
using namespace std;

class Node{
public:
    double data;
    Node *next;
    Node(double data);
};

class LinkedList{
private:
    unsigned int size;
public:
    Node* head;
    Node* tail;
    LinkedList();
    void insert_node(double);               // n = 0
    void pop_head();                        // n = 1 
    void delete_x(double);                  // n = 2
    void replace_x(unsigned int, double);   // n = 3
    void output();                          // n = -1
};

void xuli();