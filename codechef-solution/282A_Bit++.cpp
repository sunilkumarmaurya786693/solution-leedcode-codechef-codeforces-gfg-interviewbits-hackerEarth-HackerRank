//code by Nikita Nagrale
//https://codeforces.com/problemset/problem/282/A
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
