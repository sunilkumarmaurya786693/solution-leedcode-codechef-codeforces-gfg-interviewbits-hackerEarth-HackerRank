#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solve(int arr[],int i,int n,int x,vector<int>&ans)
{
 if(i==n)return;
 if(arr[i]==x)ans.push_back(i);
  solve(arr,i+1,n,x,ans);
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
    vector<int>ans;
    solve(arr,0,n,x,ans);
    if(ans.size()==0)cout<<-1<<"\n";
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<"\n";
    return 0;
}
