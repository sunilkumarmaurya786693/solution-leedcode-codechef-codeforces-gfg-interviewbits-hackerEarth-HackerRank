#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
// ll m=1000000007;
int dp[1001][1001];
int solver(vector<vector<int>>&arr,int n,int m,int i,int j)
{
    if(i==n-1 && j==m-1)return 1;
    if(i<0 || j<0 || i>=n || j>=m || arr[i][j]==1)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    dp[i][j]=solver(arr,n,m,i,j+1)+solver(arr,n,m,i+1,j);
    return dp[i][j];

}
int solve(vector<vector<int>>&arr,int n,int m){
    memset(dp,-1,sizeof(dp));
    return solver(arr,n,m,0,0);
}

int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    // memset(dp, -1, sizeof(dp));
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
    cout<<solve(arr,n,m);
    return 0;
}
