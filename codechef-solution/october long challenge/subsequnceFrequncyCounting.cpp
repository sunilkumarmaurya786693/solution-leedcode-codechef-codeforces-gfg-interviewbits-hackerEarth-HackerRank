#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
typedef long long int ll;
ll m=1000000007;
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll ans[n]={0};
    ans[0]=1;
    for(ll i=1;i<n;i++)
    ans[i]=(ans[i-1]%m*2)%m;
    for(int i=n-1;i>=0;i--)cout<<ans[i]<<" ";
    cout<<"\n";
    }
    return 0;
}
