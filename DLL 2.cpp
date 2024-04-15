#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;
    
    node(int d, node* n, node* p) {
        data = d;
        next = n;
        prev = p;
    }

    node(int d) {
        data = d;
        next = 0;
        prev = 0;
    }
};

class DLL {
public:
    node* head;
    node* tail;

    DLL() {
        head = 0;
        tail = 0;
    }

    ~DLL() {
        node* temp = head;
        while (head != 0) {
            head = head->next;
            delete temp;
            temp = head;
        }
        tail = 0;
    }

    void addtohead(int n);
    void addtotail(int n);
    void insert(int index, int n);
    void deletefromhead();
    void deletefromtail();
    void Delete(int n);
    void display();
    int count();
    void reverse();
};

void DLL::display() {
    node* P = head;
    while (P != 0) {
        cout << P->data << " ";
        P = P->next;
    }
    cout << endl;
}

int DLL::count() {
    int c = 0;
    node* P = head;
    while (P != 0) {
        c++;
        P = P->next;
    }
    return c;
}

void DLL::addtohead(int y) {
    node* P = new node(y);
    if (head == 0) {
        head = tail = P;
    }
    else {
        P->next = head;
        head->prev = P;
        head = P;
    }
}

void DLL::addtotail(int y) {
    node* P = new node(y);
    if (tail == 0) {
        head = tail = P;
    }
    else {
        P->prev = tail;
        tail->next = P;
        tail = P;
    }
}

void DLL::insert(int index, int y) {
    if (index == 1) {
        addtohead(y);
    }
    else {
        node* in = new node(y);
        int count = 1;
        node* P = head;
        node* previous = 0;
        while (P != 0 && count != index) {
            previous = P;
            P = P->next;
            count++;
        }
        if (P != 0) {
            previous->next = in;
            in->next = P;
            in->prev = previous;
            P->prev = in;
        }
        else {
            addtotail(y);
        }
    }
}

void DLL::deletefromhead() {
    if (head == 0) {
        cout << "DLL empty." << endl;
    }
    else {
        node* p = head;
        head = head->next;
        if (head == 0) {
            tail = 0;
        }
        else {
            head->prev = 0;
        }
        delete p;
    }
}

void DLL::deletefromtail() {
    if (head == 0) {
        cout << "DLL empty." << endl;
    }
    else {
        node* P = tail;
        tail = tail->prev;
        if (tail == 0) {
            head = 0;
        }
        else {
            tail->next = 0;
        }
        delete P;
    }
}

void DLL::reverse(){

    node *P = head->next;
    head->next=0;
    tail=head;
    while(P!=0){
        addtohead(P->data);
        node *temp=P;
        P=P->next;
        delete temp;
   
    }

        
    
};


void DLL::Delete(int y) {
    node* P = head;

    while (P != 0 && P->data != y) {
        P = P->next;
    }

    if (P == 0) {
        cout << "Element not found." << endl;
    }
    else if (P == head) {
        deletefromhead();
    }
    else if (P == tail) {
        deletefromtail();
    }
    else {
        P->prev->next = P->next;
        P->next->prev = P->prev;
        delete P;
    }
}

int main() {

    DLL obj;
    obj.addtohead(10);
    obj.insert(2, 20);
    obj.insert(3, 30);
    obj.insert(4, 40);
    obj.addtotail(60);
    obj.display();
    cout << obj.count() << endl;
    obj.deletefromhead();
    obj.deletefromtail();
    obj.Delete(40);
    obj.reverse();
    obj.display();
    
}