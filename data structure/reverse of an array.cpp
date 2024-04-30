#include<iostream>
using namespace std;
void R(int a[],int n){
    int i,j,temp;
    for(i=0,j=n-1;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];
    cout<< "enter the elemnets of the array : ";
    for(int i = 0; i < size; i++) {
    
        cin >> a[i];
    }
   R(a,size);
    cout<< " reversed array is : ";
    for (int i=0; i<size;i++){
        cout<<a[i]<<" ";
    }
    
    }