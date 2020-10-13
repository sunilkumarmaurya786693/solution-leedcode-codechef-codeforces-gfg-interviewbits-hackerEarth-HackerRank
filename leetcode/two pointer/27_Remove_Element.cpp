// question link
// https://leetcode.com/problems/remove-element/

// Given an array nums and a value val, remove all instances of that value in-place and return the new length.

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

// The order of elements can be changed. It doesn't matter what you leave beyond the new length.

// Example 1:

// Given nums = [3,2,2,3], val = 3,

// Your function should return length = 2, with the first two elements of nums being 2.

// It doesn't matter what you leave beyond the returned length.
#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(vector<int>&arr,int val)
{
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)count++;
        else{
            arr[i-count]=arr[i];
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<"\n";
    return n-count;
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
    int val;cin>>val;
    cout<<solve(arr,val);
    return 0;
}
