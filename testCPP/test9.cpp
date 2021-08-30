#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
void solve(int v[],int s,int e,string ss,int size){
    if(size==3){
        m[ss]++;
        return ;
    }
    if(s>=e || size==3)return;
    solve(v,s+1,e,ss+to_string(v[s]),size+1);
    solve(v,s+1,e,ss,size);
}
int main() {
    freopen("i.txt", "r", stdin); 
    int n;cin>>n;
    int v[n];
    for(int i=0;i<n;i++)cin>>v[i];
    string s="";
    solve(v,0,n,s,0);
    cout<<m.size()<<"\n";
    for(auto i=m.begin();i!=m.end();i++){
        cout<<i->first<<" "<<i->second<<"\n";
    }  
}
