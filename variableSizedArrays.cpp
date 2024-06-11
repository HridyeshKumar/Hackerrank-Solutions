// Variable Sized Arrays
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, queries;
    cin >> n >> queries;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        int length;
        cin >> length;
        arr[i].resize(length);
        for (int j = 0; j < length; j++) {
            cin >> arr[i][j];
        }
    }

    for (int k = 0; k < queries; k++) {
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }

    return 0;
}
