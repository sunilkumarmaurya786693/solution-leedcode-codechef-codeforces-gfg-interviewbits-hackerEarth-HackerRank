#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
using namespace std;
typedef long long int ll;
ll m=1000000007;

int main()
{
    SPEED;
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i<=10000000;i++)
    {
        ll mul=1;
        ll x=i;
        bool check=true;
        while(x>0)
        {
            ll r=x%10;
            mul=mul*r;
            if(r==1){check=false;break;}
            x=x/10;
        }
        if(check==true && mul==n){
            // cout<<mul<<" "<<i<<"\n";
            ans++;}
    }
    cout<<ans<<"\n";
    return 0;
}
