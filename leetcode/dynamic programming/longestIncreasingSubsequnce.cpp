#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;

// N^2 approach
int solver(vector<int>&arr)
{
      int n=arr.size();
      vector<int>ans(n,1);
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<=i;j++)
          {
              if(arr[j]<arr[i] && ans[j]>=ans[i])
              ans[i]=ans[j]+1;
          }
      }
      return *max_element(ans.begin(),ans.end());
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    // memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<solver(arr);
    return 0;
}
