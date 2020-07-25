#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
using namespace std;
typedef long long int ll;
#define inf_neg -100000000000000ll  
// ll m=1000000007;
ll store[10002][1002];
ll arr[10002];
ll n,k,m;
ll solve(ll i,ll j)
{
    if(j>k)return 0;
    if(store[i][j]!=-1)return store[i][j];
   ll ans=INT_MIN;
    ans=max(ans,solve(i+1,j));
    ans=max(ans,solve(i+1,j+1)+arr[i]*(j%m));

   store[i][j]=ans;
   return ans;
}
int main()
{
    SPEED;
    
    cin>>n>>k>>m;
    for(ll i=0;i<n;i++) 
        cin>>arr[i];
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=k;j++)
        {
            store[i][j]=-1;
        }
    }
    ll ans=INT_MIN;

    cout<<solve(0,1)<<"\n";
    


       return 0;
}
