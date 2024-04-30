#include <iostream>
using namespace std;
int fac(int n){
    if(n<=1){
        return n;
    }else{
    return n*fac(n-1);}
}
int main(){
    int n;
    cout<<"enter the number to be factorial :";
    cin>>n;
    if (n < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }
    cout<<"the factorial of the number is : "<<fac(n);
}