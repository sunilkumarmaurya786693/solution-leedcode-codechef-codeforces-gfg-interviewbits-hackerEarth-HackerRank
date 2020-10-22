#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solve(int n,int n1,int n2,int n3)
{
    if(n==0)return ;
    solve(n-1,n1,n3,n2);
    cout<<n<<"["<<n1<<"->"<<n2<<"]"<<"\n";
    solve(n-1,n3,n2,n1);
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n,n1,n2,n3;
    cin>>n>>n1>>n2>>n3;
    solve(n,n1,n2,n3);
    return 0;
}
