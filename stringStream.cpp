// StringStream
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
vector<int> parseInts(string str) {
    stringstream ss(str);
    char ch;
    vector<int> ans;
    int temp;
    while (ss >> temp) {
        ans.push_back(temp);
        ss >> ch; // Discard the comma
    }
    return ans;
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
