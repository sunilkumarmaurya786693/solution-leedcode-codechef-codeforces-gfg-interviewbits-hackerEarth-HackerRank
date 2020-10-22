//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform else nknagrale
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        string a;
        cin>>a;
        if(a=="++X" || a=="X++") ans++;
        else ans--;
    }
    cout<<ans<<endl;
    return 0;
}