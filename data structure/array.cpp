#include<iostream>
using namespace std;

void max(int ar[], int size) {
    int max = ar[0];
    for(int i = 1; i < size; i++) {
        if (max < ar[i]) {
            max = ar[i];
        }
    }
    cout << "The maximum number in the array is: " << max << endl;
}

void min(int ar[], int size) {
    int min= ar[0];
    for(int i = 1; i < size; i++) {
        if (min > ar[i]) {
            min = ar[i];
        }
    }
    cout << "The minimum number in the array is: " << min << endl;
}

int sum(int ar[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += ar[i];
    }
    return sum;
}

void average(int ar[], int size) {
    int total = sum(ar, size);
    cout << "The average of the array is: " << (total / static_cast<double>(size)) << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];
    
    for(int i = 0; i < size; i++) {
    cout << "Enter " << i << " elements: ";
        cin >> a[i];
    }
    int choice;
    do {
        cout << "\nChoose operation:\n";
        cout << "1. Find Maximum in the array\n";
        cout << "2. Find Minimum in the array\n";
        cout << "3. Find Sum in the array\n";
        cout << "4. Find Average in the array\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                max(a, size);
                break;
            case 2:
                min(a, size);
                break;
            case 3:
                cout << "The sum of the array is: " << sum(a, size) << endl;
                break;
            case 4:
                average(a, size);
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please choose again.\n";
        }
    } 
	while (choice != 5);

    return 0;
}