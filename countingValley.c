#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%i", &n);
    char str[n];
    scanf("%s", str);
    int level = 0, result = 0, valley = 0;
    for (int i = 0; i < n; i++) {
        if(str[i] == 'U') {
            level++;
            if(level == 0 && valley) {
                valley = 0;
                result++;
            }
        }
        else if(str[i] == 'D') {
            if(level == 0)
                valley = 1;
            level--;
        }
    }
    printf("%i", result);
    return 0;
}
