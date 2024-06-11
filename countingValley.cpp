#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int l;
    string str; 
    cin>>l>>str;
    int height = 0;
    int count = 0;
    for(int i=0;i<l;i++){
        if (str[i]=='U') height++;
        else {
            if (height==0) count++;
            height--;
        }
    }
    if (height<0) count--;
    cout<<count<<endl;
    return 0;
}
