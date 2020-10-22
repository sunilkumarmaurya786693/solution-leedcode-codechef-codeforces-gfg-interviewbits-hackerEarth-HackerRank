// question link
//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
vector<bool> solve(vector<int>&arr,int x)
{
 int n=arr.size();
 int max1=INT_MIN;
 for(int i=0;i<n;i++){
      max1=max(max1,arr[i]);
 }
 vector<bool>ans(n,false);
 for(int i=0;i<n;i++){
     if(x+arr[i]>=max1)ans[i]=true;
 }   
 return ans;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<bool>ans=solve(arr,x);
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    return 0;
}
