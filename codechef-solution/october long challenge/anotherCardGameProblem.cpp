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
    while(t--){
    int c,r;
    cin>>c>>r;
    int C=c/9+(c%9?1:0);
    int R=r/9+(r%9?1:0);
    // cout<<C<<" "<<R<<"\n";
    if(C<R)
    cout<<0<<" "<<C<<"\n";
    else
    {
    cout<<1<<" "<<R<<"\n";    
    }
    

    }
    return 0;
}
