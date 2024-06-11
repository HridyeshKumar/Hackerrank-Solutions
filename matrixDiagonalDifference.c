#include <stdio.h>
int main() {
    int n, a[100][100], i, j, d1 = 0, d2 = 0, diff;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        d1 += a[i][i];
    }
    for (i = 0; i < n; i++) {
        d2 += a[i][n - 1 - i];
    }
    diff=d1-d2;
    if (diff < 0) {
        printf("%d\n", -diff);
    } else {
        printf("%d\n", diff);
    }
    return 0;
}
