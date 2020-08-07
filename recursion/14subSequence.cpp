#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solve(string s,string ans,int i,int n)
{
    if(i==n){
        cout<<ans;
        if(ans!=s)
        cout<<",";
        return;}
    solve(s,ans,i+1,n);
    ans.push_back(s[i]);
    solve(s,ans,i+1,n);
    ans.pop_back();

}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    string s;
    cin>>s;
    cout<<"[";
    solve(s,"",0,s.size());
    cout<<"]";
    return 0;
}
