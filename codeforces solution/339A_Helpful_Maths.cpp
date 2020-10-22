//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform else nknagrale
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> v;
    for(char x:s){
        if(x!='+')
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    string ans="";
    ans+=v[0];
    v.erase(v.begin());

    for(char x:v){
        ans+='+';
        ans+=x;
    }
    cout<<ans<<endl;
    return 0;
}