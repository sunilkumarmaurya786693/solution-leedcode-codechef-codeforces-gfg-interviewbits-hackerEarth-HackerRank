#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int dp[100][100];
int solve(vector<int>&arr,int n,int i,int amount){
      if(i>=n || amount<0)return 0;
      if(amount==0)return 1;
      if(dp[i][amount]!=-1)return dp[i][amount];
      int ans=solve(arr,n,i,amount-arr[i]);
      ans=ans+solve(arr,n,i+1,amount);
      dp[i][amount]=ans;
      return ans;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    #endif
    int n;
    cin>>n;
    map<int,int>m1;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        if(m1[temp] || temp==0)continue;
        else arr.push_back(temp);
        m1[temp]++;
    }
    // for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
    int amount;cin>>amount;
    memset(dp,-1,sizeof(dp));
    cout<<solve(arr,arr.size(),0,amount);
    return 0;
}
