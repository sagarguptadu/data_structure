// Counting sort in C++ programming

#include <iostream>
using namespace std;

void countSort(int array[], int size,int k) {
  // The size of count must be at least the (max+1) but
  // we cannot assign declare it as int count(max+1) in C++ as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int b[10];
  int count[10];
  
  // Find the largest element of the array
  

  // Initialize count array with all zeros.
  for (int i = 0; i <= k; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]+=1;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= k; i++) {
    count[i] += count[i - 1];
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size ; i >= 0; i--) {
    count[array[i]]-=1;
    b[count[array[i]] ] = array[i];
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = b[i];
  }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int array[] = {6,0,2,0,6,3,2};
   int max = array[0];
int n = sizeof(array) / sizeof(array[0]);
  for (int i = 1; i < n; i++) {
    if (array[i] > max)
      max = array[i];
  }
  
  countSort(array, n, max);
  printArray(array, n);
}