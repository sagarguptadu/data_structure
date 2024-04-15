#include <iostream>
using namespace std;
void insertion_sort(int a[],int n){
    for(int i=1;i<n;i++){
        int temp=a[i];
       int j=i-1;
   for( j;j>=0;j--){
    if (a[j]>temp){
        a[j+1]=a[j];
        
    }
   
   else{
    break;
   }
   }
  
    a[j+1]=temp;
     for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
     }
     cout<<endl;
    }

}
void print_array(int a[],int n){
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
  int array[] = {1,2,3,4,5,6,7,8};
  int a[]={8,7,6,5,4,3,2,1};
int n = sizeof(array) / sizeof(array[0]);
  insertion_sort(array,n);
  print_array(array, n);
  insertion_sort(a,n);
  print_array(a, n);
}