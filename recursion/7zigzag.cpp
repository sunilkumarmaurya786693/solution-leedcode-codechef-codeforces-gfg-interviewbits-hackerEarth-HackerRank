#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solve(int n)
{
    if(n==0)return ;
    cout<<n<<" ";
    solve(n-1);
    cout<<n<<" ";
    solve(n-1);
    cout<<n<<" ";
    
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n;
    cin>>n;
    solve(n);
    return 0;
}
