#include <iostream>
using namespace std;
class Stack{
    private: int* a;int size,top;
    public:  Stack(){top=-1;}
             Stack(int s) {
                size=s;
                a=new int [s];
                top=-1;

             }
             ~Stack(){
                delete[]a;
             }
             void push(int x);
             void pop();
             bool isfull();
             bool isempty();
             void display();
             void peak();

};
bool Stack :: isfull(){
    if(top==size-1){return true;}
    else{return false;}
};
bool Stack :: isempty(){
    if(top==-1){return true;}
    else{return false;}
};
void Stack:: push(int item){
    if (isfull()){    cout<<"stack overflow"<<endl;
        
    }
    else{
        ++top;
        a[top]=item;
    }

};
void Stack:: pop(){
  if (isempty()) {cout<<"stack is empty no pop can be done"<<endl;} 
  else{
    cout<<"popoed element- "<<a[top]<<endl;
    top--;
  }

};
 void Stack:: peak(){
    if(isempty()){
        cout<<" stack is undefined "<<endl;
    }
    else{cout<<"top of element: "<<a[top]<<endl;}
 };
 void Stack:: display(){
    if(isempty()){
        cout<<"stack is undefined "<<endl;

    }
    else{
        for(int i=top;i>=0;i--){
            cout<<a[i]<<"  ";
        }
        cout<<endl;
    }
 };
 int main(){
    
    int size;
   
    cout<<"enter size : ";
    cin>>size;
    int cases;
     Stack obj(size);
     
    do{
        cout << endl;
        cout << "0 - Exit." << endl;
        cout << "1 - Push Item." << endl;
        cout << "2 - Pop Item." << endl;
        cout << "3 - Display Items (Print STACK)." << endl;
         cout << "4 -  stack is empty or not ." << endl;
         cout << "5 -  stack is full or not ." << endl;
         cout << "6 -  peak of the stack ." << endl;
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
                if(obj.isfull()==true){
                    cout<<"stack is full. "<<endl;
                }
                else{
                    cout<<"stack is not full. "<<endl;
                }
                break;
            }
            case 6:{
                obj.peak();
                break;
            }

        }
    }while(cases!=0);
    
 }