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

class SLL{
    public: Node*head;
    SLL(){
        head=0;
    }
   
    void display();
    void insert(int index,int y);
   void addtohead(int y);
    int count();
    void deletefromhead();
    void Delete(int y);
    void reverse();
    ~SLL(){
        Node*temp=head;
        while(head!=0){
            head=head->next;
            delete temp;
            temp=head;
        }
    }

   
    
};

void SLL:: insert(int index,int y){
    if(index==1){
        addtohead(y);
    }
   else{ 
    Node*in=new Node(y);
    int count=1;
    Node*p=head;
    Node*prev=0;
    while(p!=0&&count!=index){
        prev=p;
        p=p->next;
        count++;
    }
    prev->next=in;
    in->next=p;
   }
};
void SLL::addtohead(int y){
    Node*p=new Node(y);
    if (head==0){
        head=p;
    }
    else{
        p->next=head;
        head=p;
    }
};
int SLL:: count(){
     int c=0;
     Node*p=head;
     while(p!=0){
        c++;
        p=p->next;
     }
     return c;
};
int main(){
    SLL();
   SLL obj;
   obj.addtohead(10);
   obj.insert(2,20);
   obj.insert(3,30);
   obj.display();
   cout<<obj.count()<<endl;
   obj.deletefromhead();
  obj.Delete(15);
 obj.insert(3,40);
  obj.insert(4,50);
 obj.reverse();
 obj.display();
obj.~SLL();
 
}
void SLL:: deletefromhead(){
    if(head==0){
        cout<<" LL empty ."<<endl;
    }
    else {
        Node*p=head;
        head=head->next;
        delete p;
    }
};
void SLL ::Delete(int y){
 Node*p=head;
 Node*prev=0;
 while(p!=0&&p->data!=y){
    prev=p;
    p=p->next;
 }
 if(p==0){
    cout<<" element not found "<<endl;

 }
 else if (p==head){
    deletefromhead();
 }
 else{
    prev->next=p->next;
    delete p;
 }
};
void SLL::reverse(){
    Node*p=head->next;
    head->next=0;
    while(p!=0){
        addtohead(p->data);
        Node*temp=p;
        p=p->next;
        delete temp;
    }
};
void SLL:: display(){
        
    Node*p= head;
   while(p!=0){
    cout<<p->data<<" ";
    p=p->next;
   }
};