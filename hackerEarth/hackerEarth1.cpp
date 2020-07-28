#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
using namespace std;
typedef long long int ll;
ll m=1000000007;

int main()
{
    SPEED;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<(n*(n+1))/2+1<<"\n";
    }
    return 0;
}
