// Array Reversal
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];   
    for(i=0;i<n;i++){
        scanf("%d ",a+i);
    }
    int temp;
    for(i = 0; i < n/2; i++) {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
