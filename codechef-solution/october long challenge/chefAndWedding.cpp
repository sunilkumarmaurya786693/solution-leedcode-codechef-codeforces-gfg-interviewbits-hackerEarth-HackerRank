#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int cost[1001][1001];
int solve(int arr[],int n,int k,int i,int dp[])
{
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=INT_MAX;
    for(int j=i;j<n;j++)
    {
        int c=cost[i][j]+solve(arr,n,k,j+1,dp);
        ans=min(ans,c);
    }
    dp[i]=ans;
    return ans;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        memset(cost, 0, sizeof(cost));
        int family[101]={0};
        for(int i=0;i<n;i++)
        {
            memset(family,0,sizeof(family));
            cost[i][i]=k;
            family[arr[i]]++;
            for(int j=i+1;j<n;j++)
            {
                cost[i][j]=cost[i][j-1];
                family[arr[j]]++;
                if(family[arr[j]]>1)cost[i][j]++;
                if(family[arr[j]]==2)cost[i][j]++;
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     cout<<cost[i][j]<<" ";
        //     cout<<"\n";
        // }
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        cout<<solve(arr,n,k,0,dp)<<"\n";
    }
    return 0;
}
