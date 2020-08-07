#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int dp[100009][3][2];
int solve(vector<int>&arr,int n,int i,int k,bool isBuy){
    if(k==0 || i>=n)return 0;
    if(dp[i][k][isBuy]!=-1)return dp[i][k][isBuy];
    int ans=0;
    for(int j=i;j<n;j++)
    {
        if(isBuy)
        {
            ans=max(ans,solve(arr,n,j+1,k-1,!isBuy)+arr[i]);
            ans=max(ans,solve(arr,n,j+1,k,isBuy));
        }
        else{
            ans=max(ans,solve(arr,n,j+1,k,!isBuy)-arr[i]);
            ans=max(ans,solve(arr,n,j+1,k,isBuy));
        }
    }
    dp[i][k][isBuy]=ans;
    return ans;
}
int solver(vector<int>&arr)
{
   int n=arr.size();
   memset(dp,-1,sizeof(dp));
   return solve(arr,n,0,2,false);
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<solver(arr);
    return 0;
}
