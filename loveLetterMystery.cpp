#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int T;
string cur;
int main(){
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>cur;
        int ans=0;
        for(int i=0; i<cur.length()/2; i++){
            ans+=abs(cur[i]-cur[cur.length()-1-i]);
        }
        cout<<ans<<endl;
    }
}
