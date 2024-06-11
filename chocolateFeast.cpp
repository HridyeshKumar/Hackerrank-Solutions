#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int T, N, C, M, w, res;
    cin >> T;
    while (T--) {
        cin >> N >> C >> M;
        w = res = N/C;
        while (w >= M) {
            res += w/M;
            w = (w%M) + w/M;
        }
        cout << res << "\n";
    }
    return 0;
}
