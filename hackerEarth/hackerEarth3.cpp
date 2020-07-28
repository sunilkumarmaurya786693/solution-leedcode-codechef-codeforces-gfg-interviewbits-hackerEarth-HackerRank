#include <bits/stdc++.h>
#define SPEED                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define pii pair<int, int>
using namespace std;
typedef long long int ll;
// ll m=1000000007;
ll prime[1000005] = {0};
ll sz = 1000005;
ll power1(ll n,ll a,ll m)
{
    if(n==0)return 1;
    ll x=power1(n/2,a,m);
    x=(x%m*x%m)%m;
    if(n%2==1)x=(x%m*a%m)%m;
    return x%m;

}
int main()
{
    SPEED;
    // cout<<power1(3,4,1000);
    for (ll i = 1; i < sz; i++)
        prime[i] = i;
    for (ll i = 2; i < sz; i++)
    {
        if (prime[i] == i)
        {
            for (ll j = 2 * i; j < sz; j = j + i)
            {
                if (prime[j] == j)
                    prime[j] = i;
            }
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll ans[sz] = {0};
        for (ll i = 0; i < n; i++)
        {
            ll x = arr[i];
            unordered_map<ll, ll> m1;
            while (x != 1)
            {
                m1[prime[x]]++;
                x = x / prime[x];
            }
            for(auto j=m1.begin();j!=m1.end();j++)
            {
                if(ans[j->first]<j->second)
                ans[j->first]=j->second;
            }
        }
        ll ans1=1;
        for(ll i=1;i<sz;i++)
        {
            if(ans[i]){
            ll x=ans[i];
            ll a=i;
            // cout<<a<<" "<<x<<"\n";
            ll p=power1(x,a,m);
            ans1=(ans1%m*p%m)%m;}
        }
        ans1=power1(k,ans1,m);
        cout<<ans1%m<<"\n";

    }

    return 0;
}
