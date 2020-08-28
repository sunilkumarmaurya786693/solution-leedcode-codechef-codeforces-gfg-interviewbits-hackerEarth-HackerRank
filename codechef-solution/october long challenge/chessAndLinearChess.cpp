#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;

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
        int n,k;
        cin>>n>>k;
        int ans=-1,time=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(k%x==0)
            {
                int ti=k/x;
                if(time>ti)
                {time=ti;ans=x;}
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
