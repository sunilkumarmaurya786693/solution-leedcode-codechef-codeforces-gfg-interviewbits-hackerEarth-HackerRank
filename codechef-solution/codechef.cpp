#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
// #define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int ans=INT_MAX;
int solve(int arr[],int n,int i,int k,vector<int>&family,int tablecount,map<pair<pair<int,int>,vector<int>>,int>&dp1)
{
    if(i>=n){
    return 0;
    }
    // if(dp[i][tablecount]!=-1)return dp[i][tablecount];
    pair<int,int> p={i,tablecount};
    pair<pair<int,int>,vector<int>>p1={p,family};
    if(dp1[p1])return dp1[p1];

    if(family[arr[i]==0]){
        family[arr[i]]++;
        int p=0;
        if(family[arr[i]]==2)p=2;
        if(family[arr[i]]>2)p=1;
        int ans2=solve(arr,n,i+1,k,family,tablecount,dp1)+p;
        family[arr[i]]--;
        //  dp[i][tablecount]=ans2;
        dp1[p1]=ans2;
        return ans2;
    }
    else{
        family[arr[i]]++;
        int p=0;
        if(family[arr[i]]==2)p=2;
        if(family[arr[i]]>2)p=1;
        int ans2=solve(arr,n,i+1,k,family,tablecount,dp1)+p;
        family[arr[i]]--;
        vector<int>temp(101,0);
        temp[arr[i]]++;
        int ans1=solve(arr,n,i+1,k,temp,tablecount+1,dp1)+k;
        dp1[p1]=min(ans1,ans2);
        return min(ans1,ans2);
    }

}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        ans=INT_MAX;
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>family(101,0);
        // int family[101]={0};
        // memset(dp,-1,sizeof(dp));
        map<pair<pair<int,int>,vector<int>>,int>dp1;
        cout<<solve(arr,n,0,k,family,1,dp1)+k<<"\n";
    }
    return 0;
}
