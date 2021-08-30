#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(vector<int>&arr)
{
    int numOne=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==1)numOne++;
    }
    int subarrayCount=0;
    int i=0;
    while(i<numOne){
        if(arr[i++]==1)subarrayCount++;
    }
    int ans=numOne-subarrayCount;
    while(i<n){
         int x = arr[i-numOne];
         if(x==1)subarrayCount--;
         if(arr[i++]==1)subarrayCount++;
         ans=min(ans,numOne-subarrayCount);
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
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<solve(arr);
    return 0;
}


// 0 1 1  0 0 0 0  1 1 1 1 1 1 1  0 0 0