#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {  
    int testcases=0;
    int N=0,M=0,C=0;
    int i=0, now=0;
    scanf("%d",&testcases);
    int temp = 0;
    int answer[testcases];
    for(i=0;i<testcases;i++)
    {
        scanf("%d",&N);
        scanf("%d",&C);
        scanf("%d",&M);
        temp = N/C;
        now=temp;
        answer[i]=temp;
        while (now>=M){  
            answer[i] = answer[i] + (now/M);
            now=now - (now/M)*M + now/M;
        }
    }
    for(i=0;i<testcases;i++)
        printf("%d\n",answer[i]);
   return 0;
}
