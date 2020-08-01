#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(string s1,string s2,int n,int m,int i,int j,vector<vector<int>>&dp)
{
    if(i==n)return m-j;   //insert remaining character
    if(j==m) return n-i;  //delete extra character
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=INT_MAX;
    if(s1[i]==s2[j])
    ans=min(ans,solve(s1,s2,n,m,i+1,j+1,dp));
    else{
        ans=min(ans,solve(s1,s2,n,m,i,j+1,dp)+1);  //insert
        ans=min(ans,solve(s1,s2,n,m,i+1,j+1,dp)+1); //replce
        ans=min(ans,solve(s1,s2,n,m,i+1,j,dp)+1);  //delete
    }
    dp[i][j]=ans;
    return ans;
    
}
int solver(string s1,string s2)
{
  int n=s1.size();
  int m=s2.size();
  vector<vector<int>>dp(n,vector<int>(m,-1));
  return solve(s1,s2,n,m,0,0,dp);
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    // memset(dp, -1, sizeof(dp));
   string s1,s2;
   cin>>s1>>s2;
    cout<<solver(s1,s2);
    return 0;
}
