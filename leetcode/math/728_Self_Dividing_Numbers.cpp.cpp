//question link
//https://leetcode.com/problems/self-dividing-numbers/

// A self-dividing number is a number that is divisible by every digit it contains.

// For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

// Also, a self-dividing number is not allowed to contain the digit zero.

// Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

// Example 1:
// Input: 
// left = 1, right = 22
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
vector<int> solve(int n,int m)
{
    vector<int>ans;
    for(int i=n;i<=m;i++)
    {
        int num=i;
        int isSelfDividing=true;
        while(num){
         int rem=num%10;
         num=num/10;
         if(rem!=0 && i%rem==0)continue;
         isSelfDividing=false;
        }
        if(isSelfDividing)ans.push_back(i);
    }
    return ans;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n,m;
    cin>>n>>m;
    vector<int>ans=solve(n,m);
    for(int i=0;i<ans.size();i++)
    {
      cout<<ans[i]<<" ";
    }
    return 0;
}
