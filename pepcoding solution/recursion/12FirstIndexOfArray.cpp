#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(int arr[],int i,int n,int x)
{
 if(i==n)return -1;
 if(arr[i]==x)return i;
 return solve(arr,i+1,n,x);
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int x;cin>>x;
    cout<<solve(arr,0,n,x);
    return 0;
}
