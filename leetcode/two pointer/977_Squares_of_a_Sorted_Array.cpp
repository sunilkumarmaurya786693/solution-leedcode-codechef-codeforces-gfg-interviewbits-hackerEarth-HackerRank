// question link
// https://leetcode.com/problems/squares-of-a-sorted-array/

// Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

// Example 1:

// Input: [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Example 2:

// Input: [-7,-3,2,3,11]
// Output: [4,9,9,49,121]


#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
vector<int> solve(vector<int>&arr)
{
    int n=arr.size();
    vector<int>ans(n);
    int i=0,j=0;
    //find first positive number
    while(i<n)
    {
        
        if(arr[i]>=0)break;
        i++;
    }
    if(i==0){
       while(j<n)
       {
           ans[j]=arr[j]*arr[j];
         j++;
       }
    }
    else if(i==n){
       j=n-1;
       i=0;
       while(j>=0)
       {
           ans[i++]=arr[j]*arr[j];
           j--;
       }
    }
    else{
       j=i-1;
       int k=0;
       while(j>=0 && i<n)
       {
           if(arr[j]*arr[j]>=arr[i]*arr[i])
           {
               ans[k]=arr[i]*arr[i];
               i++;
           }
           else{
               ans[k]=arr[j]*arr[j];
               j--;
           }
           k++;
       }
       while(j>=0){
           ans[k]=arr[j]*arr[j];
           j--;k++;
       }
       while(i<n){
           ans[k]=arr[i]*arr[i];
           i++;k++;
       }
    }
    return ans;
}
int main()
{
    
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>ans=solve(arr);
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    return 0;
}
