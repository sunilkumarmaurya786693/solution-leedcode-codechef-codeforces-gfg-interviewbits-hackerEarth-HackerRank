#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int arr[40];
bool solve(int n,int i,int sum){
   if(i>=n)return false;
   if(sum==0)return true;
   return solve(n,i+1,sum-arr[i])||solve(n,i+1,sum);
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    // freopen("i.txt", "r", stdin);
    #endif
    int n;
    cin>>n;
   for(int i=0;i<n;i++)cin>>arr[i];
   int sum;cin>>sum;
    cout<<solve(n,0,sum);
    return 0;
}
