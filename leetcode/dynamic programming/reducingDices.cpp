#include <bits/stdc++.h>
using namespace std;
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
typedef long long int ll;
ll m=1000000007;

int solve(vector<int>&arr,int n,int i,int count,vector<vector<int>>store)
{
    if(i>=n)return 0;
    // cout<<i<<"\n";
    if(store[i][count]!=-1)return store[i][count];
    int ans=0;
    ans=max(ans,solve(arr,n,i+1,count+1,store))+count*arr[i];
    ans=max(ans,solve(arr,n,i+1,count,store));
    store[i][count]=ans;
    return ans;

}
int solver(vector<int>&arr)
{
    int n=arr.size();
    vector<vector<int>>store(n+1,vector<int>(n+1,-1));
    sort(arr.begin(),arr.end());
    return solve(arr,n,0,1,store);

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
