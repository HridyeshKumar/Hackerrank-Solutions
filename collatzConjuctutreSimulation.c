#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    printf("%d ",n);
    while(n!=1){
        (n%2==0)?(n=n/2):(n=(3*n)+1);
        printf("%d ",n);
    }
    return 0;
}
