#include <iostream>
using namespace std;
int sums(int array[],int n){
    if(n<=0){
        return 0;
    }
    return(sums(array,n-1)+array[n-1]);
}
int main(){
    int array[]={1,5,6,9,7,8,10};
    int n =sizeof(array)/sizeof(array[0]);
    cout<<sums(array,n);
    

}