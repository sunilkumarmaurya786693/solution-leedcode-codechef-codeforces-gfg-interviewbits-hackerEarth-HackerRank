#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll;
using namespace std;
typedef long long int ll;
ll m=1000000007;
int dp[2][20002];
int solver(vector<vector<int> >&arr,int n,int m,int i,int j)
{
    if(i>=n || j>=m)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=0;
    ans=max(ans,solver(arr,n,m,0,j+2)+arr[i][j]);
    ans=max(ans,solver(arr,n,m,1,j+2)+arr[i][j]);
    ans=max(ans,solver(arr,n,m,0,j+1));
    ans=max(ans,solver(arr,n,m,1,j+1));
    dp[i][j]=ans;
    return ans;
}
int solve(vector<vector<int> >&arr)
{
   int m=arr[0].size();
   int n=2;
   memset(dp,-1,sizeof(dp));
   int ans=0;
   ans=max(ans,solver(arr,n,m,0,0));
   ans=max(ans,solver(arr,n,m,1,0));
   return ans;
   
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
    vector<vector<int> >arr(2,vector<int>(n));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<solve(arr);
    return 0;
}