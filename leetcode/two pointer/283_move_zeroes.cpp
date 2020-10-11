// question link
// https://leetcode.com/problems/move-zeroes/

// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Example:

// Input: [0,1,0,3,12]
// Output: [1,3,12,0,0]

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solve(vector<int>&arr)
{
    int n=arr.size();
    int count_zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)count_zero++;
        else {
            arr[i-count_zero]=arr[i];
        }
    }
    int i=n-1;
    while(count_zero){
        arr[i--]=0;
        count_zero--;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
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
