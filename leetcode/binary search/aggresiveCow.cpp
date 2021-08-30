//question link
// https://www.spoj.com/problems/AGGRCOW/
#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
bool isvalid(vector<ll>&arr, ll n, ll c,ll allowedDistance){
    ll cowCount=1;
    ll location= arr[0];
    for(ll i=0;i<n;i++){
        ll diffDistance = arr[i]-location;
        if(diffDistance>=allowedDistance){
            location=arr[i];
            cowCount++;
        }
    }
    return cowCount>=c;
}
ll solve(vector<ll>&arr,ll n, ll c){
    ll start=arr[0];
    ll end=arr[n-1];
    //I want to maximise distance 
    //if my mid is true then less than mid, all are true  
    //if my mid is false then greater than mid ,all are false
    ll ans=0;
    while(start<=end){
        ll mid=start+ (end-start)/2;
        bool check= isvalid(arr,n,c,mid);
        // cout<<start<<" "<<end<<" "<<mid<<" "<<check<<"\n";
        // if(abs(end-start)<=1)break;
        if(check){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    SPEED;
    // #ifndef ONLINE_JUDGE
    // freopen("i.txt", "r", stdin);   
    // #endif
    ll t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++)cin>>arr[i];
        sort(arr.begin(), arr.end());
        cout<<solve(arr,n,c)<<"\n";
    }
    return 0;
}
