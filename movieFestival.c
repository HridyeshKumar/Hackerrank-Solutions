#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int k=n*2;
int value;
int arr[k];
for(int i=0;i<k;i++){
    scanf("%d",&arr[i]);
}
    int result=1;
    int j=1;
    while(j<k){
        for(int m=0;m<k;m=m+2){
            if(m!=j){
                if(arr[m]!=value){
                    if(arr[j]==arr[m]){
                        arr[j]=value;
                        result++;
                    }
                }
            }
        }
        j=j+2; 
    }
    printf("%d",result);
    return 0;
}
