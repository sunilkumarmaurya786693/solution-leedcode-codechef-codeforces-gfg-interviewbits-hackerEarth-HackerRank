#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int tripletMultiply(vector<int>&arr,int i)
{
    int ans=arr[i];
    int p=i-1;
    // while(p>=0 && store[p]==true)p--;
    if(p>=0)ans=ans*arr[p];

    int q=i+1;
    // while(q<arr.size() && store[q]==true)q++;
    if(q<arr.size())ans=ans*arr[q];
    return ans;
}
int solve(vector<int>&arr,int n,int p)
{
    if(n==0)return 0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        vector<int>arr2;
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            arr2.push_back(arr[j]);
        }
        ans=max(ans,solve(arr2,n-1,p+1)+tripletMultiply(arr,i));
    
    }
    return ans;
}
int solver(vector<int>&arr)
{
   int n=arr.size();
   return solve(arr,n,0);
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
