#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(int n,vector<int>&store,bool t)
{
    if(n<=0)return 1;
    if(store[n]!=-1)return store[n];
    int ans=1;
    if(t)
    {
        for(int i=1;i<=n;i++)
        {
        ans=max(ans,solve(n-i,store,true)*i);
        }
    }
    else{
        for(int i=1;i<n;i++)
        {
        ans=max(ans,solve(n-i,store,true)*i);
        }
    }
    
    store[n]=ans;
    return ans;
}
int solver(int n)
{
    vector<int>store(n+1,-1);
    return solve(n,store,false);
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    // memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    
    cout<<solver(n);
    return 0;
}
