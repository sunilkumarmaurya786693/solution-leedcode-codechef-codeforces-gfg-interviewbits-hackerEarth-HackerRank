#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(vector<int>&arr,int n,int k,int i,vector<int>&store,int cost)
{
   if(i>=n)return 0;
   for(int j=i;j<n;j++)
   {
       int ans=
   }
     
}

int solver(vector<int>&arr,int k)
{
  int n=arr.size();
  vector<int>store(n+1,-1);
  return solve(arr,n,k,0,store,arr[0]);
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
    vector<int>arr;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    cout<<solver(arr,k);
    return 0;
}
