#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(vector<int>&arr,int n,int i,bool isFirstChoose,vector<vector<int>>dp)
{  
    if(i>=n)return 0;
    if(i==n-1){
        //if u rob from first house then u can not rob last house
       // if u rob from second then u can rob last house also
        if(isFirstChoose)return 0;
        return arr[i];
    }
    if(dp[i][isFirstChoose]!=-1)return dp[i][isFirstChoose];
    int ans=0;
    
    if(i==0)
    {ans=max(ans,solve(arr,n,i+2,true,dp)+arr[0]);
     ans=max(ans,solve(arr,n,i+1,isFirstChoose,dp));
    }
    else{
        ans=max(ans,solve(arr,n,i+2,isFirstChoose,dp)+arr[i]);
        ans=max(ans,solve(arr,n,i+1,isFirstChoose,dp));
    }
    dp[i][isFirstChoose]=ans;
    return ans;
}
int solver(vector<int>&arr)
{
    int n=arr.size();
    vector<vector<int>>dp(n,vector<int>(2,-1));
    return solve(arr,n,0,false,dp);
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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<solver(arr);
    return 0;
}
