#include<iostream>
#include <vector>
using namespace std;
class queue{
    int front ;int back ; int*a;
    int size;
    public:
           queue(){
            front=back=-1;
           }    
           queue(int s){
             size=s;
             a=new int [s];
                front=0;
                back=0;
           }
          void enqueue(int data){
              if (back==size){
                cout<<"queue is full."<<endl;
              }
              else{
                a[back]=data;
                back++;
              }
          } 
          void dequeue(){
              if (back==front){
                cout<<"queue is empty."<<endl;
              }
              else{
                for(int i=0;i<back-1;i++){
                 a[i]=a[i+1];
              }
              back--;
              }
          } 
          void  display(){
    if(isempty()){
        cout<<"stack is undefined "<<endl;

    }
    else{
        for(int i=0;i<back;i++){
            cout<<a[i]<<"  ";
        }
        cout<<endl;
    }
 }
          bool  isfull(){
    if(back==size){return true;}
    else{return false;}
}
          bool  isempty(){
    if(back==front){return true;}
    else{return false;}
}
          void queuefront() {
    if(isempty()==true){cout<<"queue is empty."<<endl;}
    else{
    cout<<"front element of the queue: "<<a[front]<<endl;
   }   }   
          void queueback() {
    if(isempty()==true){cout<<"queue is empty."<<endl;}
    else{
    cout<<"front element of the queue: "<<a[back-1]<<endl;
   }  }

};
int main(){
    
    int size;
   
    cout<<"enter size : ";
    cin>>size;
    queue obj(size);
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
        
         cout << "8 -  queue is full or not ." << endl;
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
               cout<<" size of queue: "<<size<<endl;;
                break;
            }
            case 6:{
                
                obj.queuefront();
                break;
            }
            case 7:{
                
                obj.queueback();
                break;
            }
           
            case 8:{
                if(obj.isfull()==true){
                    cout<<"queue is full. "<<endl;
                }
                else{
                    cout<<"queue is not full. "<<endl;
                }
                break;
            }

        }
    }while(cases!=0);
    
 }

