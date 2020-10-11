//question link 
// https://leetcode.com/problems/intersection-of-two-arrays

// Given two arrays, write a function to compute their intersection.

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
vector<int> solve(vector<int>&arr1, vector<int>&arr2)
{
    int n1=arr1.size();
    int n2=arr2.size();
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1 && j<n2)
    {
        int x=arr1[i];
        int y=arr2[j];
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            while(i<n1 && arr1[i]==x)i++;
            while(j<n2 && arr2[j]==y )j++;
        }
        else if(arr1[i]>arr2[j])
        {
        while(j<n2 && arr2[j]==y)j++;
        }   
        else{
        while(i<n1 && arr1[i]==x)i++;
        } 
    
    }
    return ans;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n1,n2;
    cin>>n1>>n2;
    vector<int>arr1(n1),arr2(n2);
    for(int i=0;i<n1;i++)cin>>arr1[i];
    for(int i=0;i<n2;i++)cin>>arr2[i];

    vector<int>ans=solve(arr1,arr2);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}
