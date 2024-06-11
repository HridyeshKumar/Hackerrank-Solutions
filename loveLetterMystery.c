#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 10000
int main(void) {
    int testCases, i, j, lenstr, numOps;
    char word[MAX_STR_LEN];
    scanf("%d", &testCases);
    if (testCases > 10 || testCases < 1){
        fprintf(stderr,"Usage: T out of bounds\n");
        return 1;
    }
    for(i = 0; i < testCases; ++i) {
        numOps = 0;
        scanf("%s", word);
        lenstr = (int) strlen(word);
        for(j = 0; j < lenstr/2; ++j) {
            numOps += abs(tolower(word[j]) - tolower(word[lenstr - j - 1]));
        }
        printf("%d\n",numOps);
    }
    return 0;
}
