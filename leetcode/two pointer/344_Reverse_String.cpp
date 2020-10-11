// question link
// https://leetcode.com/problems/reverse-string/

// Write a function that reverses a string. The input string is given as an array of characters char[].

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

// You may assume all the characters consist of printable ascii characters.

 

// Example 1:

// Input: ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solve(vector<char>&s)
{
 int n=s.size();
 int i=0,j=n-1;
 while(i<j)
 {
     swap(s[i],s[j]);
     i++;
     j--;
 }    
    for(int i=0;i<n;i++)cout<<s[i]<<" ";
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n;
    cin>>n;
    vector<char>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    solve(arr);
    return 0;
}
