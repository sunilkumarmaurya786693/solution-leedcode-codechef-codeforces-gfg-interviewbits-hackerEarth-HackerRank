#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
// static int fast = [](){ios::sync_with_stdio(false);cin.tie(0);return 0;}();
// static int dp[200][200];
int store[71][71][71][71];
int solve(vector<vector<int>>&arr,int n,int m,int i1,int j1,int i2,int j2)
{
    // cout<<i1<<" "<<j1<<" "<<i2<<" "<<j2<<"\n";
     if(i1<0 || i1>=n || i2<0 || i2>=n || j1<0 || j1>=m ||j2<0 || j2>=m)
     return 0;
     if(store[i1][j1][i2][j2]!=-1)return store[i1][j1][i2][j2];
     int ans=0;
     for(int x1=-1;x1<=1;x1++)
     {
         for(int x2=-1;x2<=1;x2++)
         {
           ans=max(ans,solve(arr,n,m,i1+1,j1+x1,i2+1,j2+x2));
         }
     }
     if(i1==i2 && j1==j2)
     ans=ans+arr[i1][j1];
     else
     {
         ans=ans+arr[i1][j1]+arr[i2][j2];
     }
     store[i1][j1][i2][j2]=ans;
     return ans;
     
}
int solver(vector<vector<int>>&arr)
{
   int n=arr.size();
   int m=arr[0].size();
   memset(store, -1, sizeof(store));
   return solve(arr,n,m,0,0,0,m-1);
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);    
    #endif
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int x1=0;x1<n;x1++)
    {
        for(int x2=0;x2<m;x2++)
    cin>>arr[x1][x2];
    }
    // memset(dp, -1, sizeof(dp));
    cout<<solver(arr);
    return 0;
}
