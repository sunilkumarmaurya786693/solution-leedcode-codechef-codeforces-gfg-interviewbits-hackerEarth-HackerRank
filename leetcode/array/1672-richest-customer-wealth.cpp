// // https://leetcode.com/problems/richest-customer-wealth/
// You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

// A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

 

// Example 1:

// Input: accounts = [[1,2,3],[3,2,1]]
// Output: 6
// Explanation:
// 1st customer has wealth = 1 + 2 + 3 = 6
// 2nd customer has wealth = 3 + 2 + 1 = 6
// Both customers are considered the richest with a wealth of 6 each, so return 6.
// Example 2:

// Input: accounts = [[1,5],[7,3],[3,5]]
// Output: 10
// Explanation: 
// 1st customer has wealth = 6
// 2nd customer has wealth = 10 
// 3rd customer has wealth = 8
// The 2nd customer is the richest with a wealth of 10.
// Example 3:

// Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
// Output: 17


// question link


#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int solve(vector<vector<int>>&arr)
{ 
  int n=arr.size();
  int m=arr[0].size();
  int max_sum=INT_MIN;
  for(int i=0;i<n;i++){
      int sum=0;
      for(int j=0;j<m;j++)
        sum=sum+arr[i][j];
    max_sum=max(sum,max_sum);
  }
  return max_sum;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    cout<<solve(arr);
    return 0;
}
