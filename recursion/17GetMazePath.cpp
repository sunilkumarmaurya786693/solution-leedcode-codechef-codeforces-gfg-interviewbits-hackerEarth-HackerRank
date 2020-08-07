#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
vector<string>store;
void solve(int n,int m,int i,int j,string ans)
{
    if(i>=n || j>=m){
        return ;
    }
    if(i==n-1 && j==m-1){
       store.push_back(ans);
       return;
    }
    for(int x=1;x<n;x++)
    {
        ans.push_back('v');
        ans.push_back(x+'0');
        solve(n,m,i+x,j,ans);
        ans.pop_back();
        ans.pop_back();
    }
    for(int y=1;y<m;y++)
    {
        ans.push_back('h');
        ans.push_back(y+'0');
        solve(n,m,i,j+y,ans);
        ans.pop_back();
        ans.pop_back();
    }
    for(int d=1;d<min(n,m);d++)
    {
        ans.push_back('d');
        ans.push_back(d+'0');
        solve(n,m,i,j+d,ans);
        ans.pop_back();
        ans.pop_back();
    }

}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n,m;
    cin>>n>>m;
    solve(n,m,0,0,"");
    cout<<"[";
    for(int i=0;i<store.size();i++)
    {
        cout<<store[i];
        if(i!=store.size()-1)
        cout<<", ";
    }
    cout<<"]";
    return 0;

}
