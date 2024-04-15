#include<iostream>
using namespace std;
void f(int n){
    for(int i=n;i>=1;i--){
        if(i%2==0){
            cout<<i*i*i<<endl;
        }
    }
}
void fun(int n){
   
    if(n%2==0){
    cout<< (n*n*n)<<endl;
    fun(n-1);
   }
   else if(n>=2){
     fun(n-1);
   }
  

   }



int main(){
    int n;
    cout<< " enter the number : ";
    cin>>n;
    f(n);
     fun(n);
}