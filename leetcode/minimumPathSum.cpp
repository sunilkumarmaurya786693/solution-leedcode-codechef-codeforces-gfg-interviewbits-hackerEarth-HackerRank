#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(vector<vector<int>>&arr,int n,int m,int i,int j,vector<vector<int>>&store)
{
    if(i>=n ||j>=m)return 100000000;
    if(store[i][j]!=-1)return store[i][j];
    if(i==n-1 && j==m-1)return arr[i][j];
    // cout<<i<<" "<<j<<"\n";
    int ans1=solve(arr,n,m,i+1,j,store)+arr[i][j];
    int ans2=solve(arr,n,m,i,j+1,store)+arr[i][j];
    store[i][j]=min(ans1,ans2);
    return min(ans1,ans2);
}
int solver(vector<vector<int>>&arr)
{
int n,m;
n=arr.size();
m=arr[0].size();
vector<vector<int>>store(n,vector<int>(m,-1));
return solve(arr,n,m,0,0,store);
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    // memset(dp, -1, sizeof(dp));
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<solver(arr);
    return 0;
}
