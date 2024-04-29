#include<iostream>
using namespace std;

int LS(int arr[], int key, int size){
	for(int i = 0; i<size; i++){
		if(arr[i] == key){
			return i;
		}
	}
	
	return -1;
}
int main(){

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    
    int key;
    cout<<"Enter the key value : ";
    cin>>key;
     cout<<"index at which value is : "<<LS(arr,key, n)<<endl;
    }