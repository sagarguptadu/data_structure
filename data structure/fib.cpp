#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
    return(fib(n-1)+fib(n-2));}
    
}
int main(){
    int n;
    cout<<" enter the number : ";
    cin>>n;
     if (n < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }
    cout<<" sum of the fibonacci series : "<< fib(n);
}