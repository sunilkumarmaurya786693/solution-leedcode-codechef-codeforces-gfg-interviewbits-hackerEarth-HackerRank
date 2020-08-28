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
    int h,p;
    cin>>h>>p;
    int total=0;
    int x=p;
    while(p)
    {
        total=total+p;
        p=p/2;
    }
    cout<<(total>=h?1:0)<<"\n";
    }
    return 0;
}
