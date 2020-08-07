#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(int a,int n)
{
    if(n==0)return 1;
    int ans=solve(a,n-1);
    return ans*a;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int a,n;
    cin>>a>>n;
    cout<<solve(a,n);
    return 0;
}
