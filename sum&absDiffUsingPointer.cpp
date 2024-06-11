// POINTER
#include <iostream>
using namespace std;
void update(int *a, int *b) {
    // Calculate the sum and absolute difference
    int sum = *a + *b;
    int diff = (*a > *b) ? (*a - *b) : (*b - *a);
    // Update the values
    *a = sum;
    *b = diff;
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;
    return 0;
}
