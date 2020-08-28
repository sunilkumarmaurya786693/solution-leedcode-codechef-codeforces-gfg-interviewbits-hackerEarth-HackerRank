#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int arr[101][101];
int dp[101][101];
int check(int n,int m,int i,int j)
{
    if(i<0 || j<0 || i>=n || j>=m)return true;
    return false;
}
int solve(int n,int m,int i,int j){
     if(check(n,m,i,j))return 0;
     if(dp[i][j]!=-1)return dp[i][j];
     int ans=solve(n,m,i-1,j+1)+arr[i][j];
     ans=max(ans,solve(n,m,i,j+1)+arr[i][j]);
     ans=max(ans,solve(n,m,i+1,j+1)+arr[i][j]);
     dp[i][j]=ans;
     return ans;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    #endif
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
    int ans=INT_MIN;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        ans=max(ans,solve(n,m,i,0));
    }
    cout<<ans<<"\n";
    return 0;
}
