#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(int n)
{
    int k=0,p=1,ans=n;
    while(n)
    {
        int r=n%10;
        if(r==6)k=p;
        p=p*10;
        n=n/10;
    }
    ans=ans+k*3;
return ans;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}
