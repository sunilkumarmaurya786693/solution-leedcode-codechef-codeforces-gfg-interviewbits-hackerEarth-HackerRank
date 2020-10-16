//question link
// https://leetcode.com/problems/di-string-match/

// Given a string S that only contains "I" (increase) or "D" (decrease), let N = S.length.

// Return any permutation A of [0, 1, ..., N] such that for all i = 0, ..., N-1:

// If S[i] == "I", then A[i] < A[i+1]
// If S[i] == "D", then A[i] > A[i+1]
 

// Example 1:

// Input: "IDID"
// Output: [0,4,1,3,2]
// Example 2:

// Input: "III"
// Output: [0,1,2,3]
// Example 3:

// Input: "DDI"
// Output: [3,2,0,1]

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
vector<int> diStringMatch(string S) {
    int n=S.size();
    int i=0,j=n;
    vector<int>ans(n+1);
    for(int k=0;k<n;k++)
    {
      if(S[k]=='I')
      {
          ans[k]=i;i++;
      }
      else {
          ans[k]=j;
          j--;
      }
    }
    ans[n]=i;
        return ans;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif

    string s;
    cin>>s;
    vector<int>ans=diStringMatch(s);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}
