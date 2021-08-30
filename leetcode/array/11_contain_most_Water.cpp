// question link
#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(vector<int>&arr)
{
    int max_water =0;
    int i=0;
    int j=arr.size();
    while(i<=j){
        max_water = max(max_water, (j-i)*min(arr[i],arr[j]));
        if(arr[i]<arr[j])i++;
        else j--;
    }
    cout<<max_water;
    return max_water;
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
    for(int i=0;i<n;i++)cin>>arr[i];
    solve(arr);
    return 0;
}
