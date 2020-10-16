//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    set<char> ans;
    for(auto x:s){
        if(x=='{' || x=='}' || x==' ' || x==',') continue;
        ans.insert(x);
    }
    cout<<ans.size()<<endl;
    return 0;
}