// Digit Frequency
#include <stdio.h>
#include <string.h>
int main() {
    int freq[10] = {0};
    char c;
    // Read characters until EOF
    while(scanf("%c", &c) == 1) {
        // If the character is a digit, increment its frequency
        if(c >= '0' && c <= '9') {
            freq[c - '0']++;
        }
    }
    // Print the frequency of each digit
    for(int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }
    printf("\n");
    return 0;
}
