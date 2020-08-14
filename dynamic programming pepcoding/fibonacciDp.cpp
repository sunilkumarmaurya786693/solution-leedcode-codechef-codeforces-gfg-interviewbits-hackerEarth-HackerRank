#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int dp[100];
int solve(int n){
     if(n<=1)return n;
     if(dp[n]!=-1)return dp[n];
     dp[n]=solve(n-1)+solve(n-2);
     return dp[n];
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    #endif
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<solve(n);
    return 0;
}
