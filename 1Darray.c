// 1D arrays in C
#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];   
    for(int i=0;i<n;i++){
        scanf("%d ",&a[n]);
        sum+=a[n];
    }
    printf("%d",sum);
    return 0;
}
