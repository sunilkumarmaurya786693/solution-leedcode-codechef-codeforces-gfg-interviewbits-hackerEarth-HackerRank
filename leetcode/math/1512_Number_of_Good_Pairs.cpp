#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(vector<int>&arr)
{
    int n=arr.size();
    int count[101]={0};
    for(int i=0;i<n;i++)
    count[arr[i]]++;
    int ans=0;
    for(int i=1;i<101;i++)
    {
        ans=ans+(count[i]*(count[i]-1))/2;
    }
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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<solve(arr);
    return 0;
}
