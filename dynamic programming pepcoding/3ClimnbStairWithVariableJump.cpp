#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
map<vector<int>,int>m1;
int solve(int arr[],int n,int size1,int i,vector<int>&ans){
    // cout<<n<<"\n";
    if(n<0)return 0;
    if(n==0) {
        m1[ans]++;
    return 1;
    }
        
    if(i>=size1)return 0;
    int sum=0;
    for(int j=i;j<size1;j++)
    {   if(arr[j]>0){     
        ans.push_back(arr[j]);
            int ans1=solve(arr,n-arr[j],size1,j+1,ans);
            ans.pop_back();
            int ans2=solve(arr,n,size1,j+1,ans);
            sum=sum+ans1+ans2;
    }
    }
    return sum;
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
    sort(arr,arr+n);
    vector<int>ans;
    solve(arr,n,n,0,ans);
    cout<<m1.size();
    return 0;
}
