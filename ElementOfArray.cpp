#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index = 0) {
    //WAP to print elements of array using recursion
    if (index == size) {
        return;
    }
    // Print the current element
    cout << arr[index] << " ";
    // Recursive call to print the next element
    printArray(arr, size, index + 1);
}

int main() {
    int arr[] = {3, 5, 6, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array elements: ";
    printArray(arr, size);
    return 0;
}

