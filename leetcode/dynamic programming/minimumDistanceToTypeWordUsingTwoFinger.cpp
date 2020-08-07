#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int dp[27][27][301];
int score(int k1,int k2){
    if(k1==26 || k2==26)return 0;
    return abs(k1/6-k2/6)+abs(k1%6-k2%6);
}

int solve(string &s,int n, int i,int x,int y)
{
    if(i>=n)return 0;
    if(dp[x][y][i]!=-1)return dp[x][y][i];
    int p=(int)(s[i]-'A');
    int ans1=solve(s,n,i+1,p,y)+score(p,x);
    int ans2=solve(s,n,i+1,x,p)+score(p,y);
    int ans=min(ans1,ans2);
    dp[x][y][i]=ans;
    return ans;
}
int solver(string s)
{
   int n=s.size();
   memset(dp,-1,sizeof(dp));
   return solve(s,n,0,26,26);
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    // memset(dp, -1, sizeof(dp));
   string s;
   cin>>s;
    cout<<solver(s);
    return 0;
}
