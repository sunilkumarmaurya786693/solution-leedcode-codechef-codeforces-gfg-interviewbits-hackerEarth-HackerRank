#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
static int fast = [](){ios::sync_with_stdio(false);cin.tie(0);return 0;}();
static int dp[200][200];
vector<int> solver(int n)
{
    vector<int>arr(n+1,0);
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;
    for(int i=2;i<=n;i++)
    {
        if(i%2==1)
        arr[i]=arr[i-1]+1;
        else
        arr[i]=arr[i/2];
    }
    return arr;
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);    
    #endif
    int n;
    cin>>n;
    // vector<int>arr;
    // for(int i=0;i<n;i++)
    // cin>>arr[i];
    // memset(dp, -1, sizeof(dp));
    vector<int>ans=solver(n);
    for(int i=0;i<=n;i++)
    cout<<ans[i]<<" ";
    return 0;
}
