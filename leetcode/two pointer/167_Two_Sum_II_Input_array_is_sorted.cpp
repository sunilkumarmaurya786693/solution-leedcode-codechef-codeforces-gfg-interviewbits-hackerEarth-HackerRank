// question link
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

// Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

// The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.

// Note:

// Your returned answers (both index1 and index2) are not zero-based.
// You may assume that each input would have exactly one solution and you may not use the same element twice.
 

// Example 1:

// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
// Example 2:

// Input: numbers = [2,3,4], target = 6
// Output: [1,3]
// Example 3:

// Input: numbers = [-1,0], target = -1
// Output: [1,2]

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
vector<int> solve(vector<int>&arr, int target)
{
    int n=arr.size();
    int i=0,j=n-1;
    vector<int>ans(2,0);
    // cout<<target;
    while(i<j)
    {
        int sum=arr[i]+arr[j];
        if(sum==target)
        {
            ans[0]=i;
            ans[1]=j;
            return ans;
        } else if(sum>target)j--;
        else i++;
    }
    return ans;
}
int main()
{
    // SPEED;
    // #ifndef ONLINE_JUDGE
    // freopen("i.txt", "r", stdin);   
    // #endif
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    vector<int>ans=solve(arr,target);
    
    cout<<ans[0]<<" "<<ans[1]<<"\n";
    return 0;
}
