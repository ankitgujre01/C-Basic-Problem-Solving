#include <iostream>
using namespace std;

int main() {
    int arr[] = {11, 2, 30, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to the sum
    }

    cout << "Sum of all elements in the array is: " << sum << endl;
    return 0;
}
