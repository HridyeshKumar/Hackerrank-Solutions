//Reversing the Array
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of integers

    int a[n]; // Declare an array of size n

    // Read n integers into the array
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Print the integers in reverse order
    for (int i = n - 1; i >= 0; --i) {
        cout << a[i] << " ";
    }

    return 0;
}
