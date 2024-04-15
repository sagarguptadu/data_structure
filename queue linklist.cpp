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
class queue{
    public: Node* head;Node *tail;int size;
           queue(){
            head=0;
            tail=0;
            size=0;
           }
           void enqueue(int data){
            Node* temp= new Node(data);
            if(head==0){
                head=tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            size++;
           }
           void dequeue(){
              if (head==0){
                cout<<"queue is empty."<<endl;
              }
              else{
                Node* temp=head;
                head=head->next;
                delete temp;
                size--;
              }

           }
           int getsize(){
            return size;}
         void display(){
            if(head==0){cout<<"queue is empty."<<endl;}
         else{ Node*p= head;
         while(p!=0){
         cout<<p->data<<" ";
           p=p->next;
         }}}
       bool isempty(){
         if(head==0){return true;}
         else{return false;}
        }
        void first(){
             if(head==0){cout<<"queue is empty."<<endl;}
             else{
            Node* p=head;
            cout<<p->data<<endl;}
        }
       void last(){
             if(head==0){cout<<"queue is empty."<<endl;}
             else{
            Node* p=tail;
            cout<<p->data<<endl;}
        }
            ~ queue(){
                Node*temp=head;
        while(head!=0){
            head=head->next;
            delete temp;
            temp=head;
        }
            }




};
int main(){
    queue obj;
     int cases;
     
     
    do{
        cout << endl;
        cout << "0 - Exit." << endl;
        cout << "1 - enqueue." << endl;
        cout << "2 - dequeue" << endl;
        cout << "3 - Display Items (Print queue)." << endl;
         cout << "4 -  queue is empty or not ." << endl;
         cout << "5 -  size of the queue." << endl;
         cout << "6 -  first element of the queue." << endl;
         cout << "7 -  last element of the queue." << endl;
        cout<<"enter the cases: ";
        cin>>cases;
        switch(cases){
            
            case 0: {
                   break;
            }
            case 1:{
                int n;
                cout<< "item u want to add in queue : ";
                cin>>n;
                obj.enqueue(n);
                 break;

            }
            case 2:{
               obj.dequeue();
               break;
            }
            case 3:{
                cout<< "value of the queue stored: ";
                obj.display();
                break;
            }
            case 4:{
                if(obj.isempty()==true){
                    cout<<"queue is empty. "<<endl;
                }
                else{
                    cout<<"queue is not empty. "<<endl;
                }
                break;
            }
            
            case 5:{
               cout<<" size of queue: "<<obj.getsize()<<endl;;
                break;
            }
            case 6:{
                cout<<"first element of queue: ";
                obj.first();
                break;
            }
            case 7:{
                cout<<"last element of queue: ";
                obj.last();
                break;
            }

        }
    }while(cases!=0);
    
 }

