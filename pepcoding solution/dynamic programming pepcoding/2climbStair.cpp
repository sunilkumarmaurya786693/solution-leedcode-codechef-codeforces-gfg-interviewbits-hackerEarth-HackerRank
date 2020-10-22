#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(int n){
     if(n==0)return 1;
     if(n<0)return 0;
     int ans=solve(n-1)+solve(n-2)+solve(n-3);
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
