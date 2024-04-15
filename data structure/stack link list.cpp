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

class Stack{
    public: Node*top;
    Stack(){
        top=0;
    }
             void push(int x);
             void pop();
             
             bool isempty();
             void display();
             void peak();
        ~Stack(){
        Node*temp=top;
        while(top!=0){
            top=top->next;
            delete temp;
            temp=top;
        }
    }
};    
bool Stack :: isempty(){
    if(top==0){return true;}
    else{return false;}
};
  
    void Stack::push(int x){
    Node*p=new Node(x);
    if (top==0){
        top=p;
    }
    else{
        p->next=top;
        top=p;
    }
};
void Stack:: pop(){
    if(top==0){
        cout<<" staack is empty"<<endl;
    }
    else {
        
        Node*p=top;
        top=top->next;
        cout<<" popped element is : "<<p->data<<endl;
        delete p;
    }
};
void Stack:: display(){
        
    Node*p= top;
   while(p!=0){
    cout<<p->data<<" ";
    p=p->next;
   }
};
void Stack:: peak(){
       Node*p=top;
       cout<<"peak elament is : "<<p->data<<endl;
};
 int main(){
    
    int cases;
     Stack obj;
     
    do{
        cout << endl;
        cout << "0 - Exit." << endl;
        cout << "1 - Push Item." << endl;
        cout << "2 - Pop Item." << endl;
        cout << "3 - Display Items (Print STACK)." << endl;
         cout << "4 -  stack is empty or not ." << endl;
         
         cout << "5 -  peak of the stack ." << endl;
        cout<<"enter the cases: ";
        cin>>cases;
        switch(cases){
            
            case 0: {
                   break;
            }
            case 1:{
                int n;
                cout<< "item u want to push : ";
                cin>>n;
                obj.push(n);
                 break;

            }
            case 2:{
               obj.pop();
               break;
            }
            case 3:{
                cout<< "value of the stack stored: ";
                obj.display();
                break;
            }
            case 4:{
                if(obj.isempty()==true){
                    cout<<"stack is empty. "<<endl;
                }
                else{
                    cout<<"stack is not empty. "<<endl;
                }
                break;
            }
            
            
            case 5:{
                obj.peak();
                break;
            }

        }
    }while(cases!=0);
    
 }