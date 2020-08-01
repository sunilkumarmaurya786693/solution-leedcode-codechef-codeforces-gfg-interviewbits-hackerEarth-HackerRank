#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int dp[1009][1009];
int solver(string s,int n,int i,int j)
{
    if(i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=0;
    if(s[i]==s[j]){
        int p=2;
        if(i==j)p--;
    ans=max(ans,solver(s,n,i+1,j-1)+p);
    }
    else{
        ans=max(ans,solver(s,n,i+1,j));
        ans=max(ans,solver(s,n,i,j-1));
    }
    dp[i][j]=ans;
    return ans;
}
int solve(string s)
{
    memset(dp, -1, sizeof(dp));
    int n=s.size();
    return solver(s,n,0,n-1);
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
   
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}
