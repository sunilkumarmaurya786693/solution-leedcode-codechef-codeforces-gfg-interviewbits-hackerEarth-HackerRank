#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int dp[1001][1001]={{0}};
int solve(string s1,string s2,int n1,int n2,int i,int j)
{
    if(i>=n1 || j>=n2)return 0;
    if(dp[i][j]!=0)return dp[i][j]-1;
    int ans=0;
    if(s1[i]==s2[j])
    ans=solve(s1,s2,n1,n2,i+1,j+1)+1;
    else{
        int ans1=solve(s1,s2,n1,n2,i+1,j);
        int ans2=solve(s1,s2,n1,n2,i,j+1);
        ans=max(ans1,ans2);
    }
    dp[i][j]=ans+1;
    return ans;
}
int solver(string s1,string s2)
{
    int n1=s1.size();
    int n2=s2.size();
    return solve(s1,s2,n1,n2,0,0);
    // using tabulation dp
    int store[n1+1][n2+1]={0};
    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=n2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                store[i][j]=store[i-1][j-1]+1;
            }
            else
            store[i][j]=max(store[i-1][j],store[i][j-1]);
        }
    }
    return store[n1][n2];
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
