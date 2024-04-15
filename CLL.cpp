#include <iostream>
using namespace std;

class Node {
    public: int data;
           Node * next;
           Node(int d, Node * n){
            data=d;
            next=n;
           }
           Node(int y){
            next=0;
            data=y;
           }
          

};
class CLL{

public: Node* tail;
    
       CLL(){
       tail =0;
      }
        ~CLL() {
        if (tail != nullptr) {
            Node* p = tail->next;
            while (p != tail) {
                Node* temp = p;
                p = p->next;
                delete temp;
            }
            delete tail;
        }
    }
         
      void display();
      void addtohead(int y);
      void addtotail(int y);
      
       void deletefromhead();
      void deletefromtail();
      
      void reverse();
};
void CLL::addtohead(int y){
    Node*p=new Node(y);
    if (tail==0){
        tail=p;
        tail->next=tail;
    }
    else{
        p->next=tail->next;
        tail->next=p;
    }
};

void CLL::addtotail(int y){
    Node*p=new Node(y);
    if (tail==0){
        tail=p;
        tail->next=tail;
    }
    else{
        p->next=tail->next;
        tail->next=p;
        tail=p;
    }
};
void CLL:: deletefromhead(){
    if(tail==0){
        cout<<" CLL empty ."<<endl;
    }
    else if(tail->next==tail){
       delete tail;
       tail=0;
    }
    else {
        Node*p=tail->next;
        tail->next=p->next;
        delete p;
    }
        
    };
    void CLL:: deletefromtail(){
    if(tail==0){
        cout<<" CLL empty ."<<endl;
    }
    else if(tail->next==tail){
       delete tail;
       tail=0;
    }
    else {
        Node*p=tail->next;
        while (p->next!=tail)
        {
            p=p->next;
        }
        
        p->next=tail->next;
        delete tail;
        tail=p;
    }
        
    };
    void CLL:: display(){
        if(tail==0){cout<<"cannot be displayed"<<endl;}
    else{Node*p= tail->next ;
   do
   {
        cout<<p->data<<" ";
        p=p->next;
    } while(p!=tail->next);
    cout<<endl;
    }

};
void CLL::reverse(){
    tail=tail->next;
    Node*p=tail->next;
    tail->next=tail;
    while(p!=tail){
        addtohead(p->data);
        Node*temp=p;
        p=p->next;
        delete temp;
    }
};
int main() {
    
    CLL obj;
    obj.addtohead(40);
   obj.addtohead(30);
  obj.addtohead(20);
  obj.addtohead(10);
   /*obj.insert(2, 20);
    obj.insert(3, 30);
    obj.insert(4, 40);*/
     obj.addtotail(50);
    obj.display();
   // cout << obj.count() << endl;
    obj.deletefromhead();
   obj.deletefromtail();
   // obj.Delete(40);
    obj.reverse();
    obj.display();
    
}