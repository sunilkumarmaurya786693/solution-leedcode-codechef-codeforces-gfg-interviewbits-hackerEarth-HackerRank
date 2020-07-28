#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;

int solve(vector<int>&arr)
{

}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);    
    #endif
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<solve(arr);
    return 0;
}
