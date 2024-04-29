#include<iostream>
using namespace std;

int BS(int arr[] , int n , int key){
    int l = 0;
    int h = n - 1;

    while (l <= n){
        int mid = l + (h - l)/2;
        if (arr[mid] == key){
            return mid;
        }
        if (arr[mid] > key){
             h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
    
}

int Bs(int a[],int l , int h,int key){
    if(l<=h){
        int mid=(l+h)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key<a[mid]){
            return Bs(a,l , mid-1, key);
        }
        else{
            return Bs(a,mid+1,h, key);
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
    int size = sizeof(arr)/sizeof(arr[0]);
    
   
    cout<<"index at which value is : "<<BS(arr,size,key)<<endl;
    cout<<"index at which value is : "<<Bs(arr,0,size-1,key);
    
    return 0;
}