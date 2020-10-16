//question link
// https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/

// Given a function  f(x, y) and a value z, return all positive integer pairs x and y where f(x,y) == z.

// The function is constantly increasing, i.e.:

// f(x, y) < f(x + 1, y)
// f(x, y) < f(x, y + 1)
// The function interface is defined like this: 

// interface CustomFunction {
// public:
//   // Returns positive integer f(x, y) for any given positive integer x and y.
//   int f(int x, int y);
// };
// For custom testing purposes you're given an integer function_id and a target z as input, where function_id represent one function from an secret internal list, on the examples you'll know only two functions from the list.  

// You may return the solutions in any order.

 

// Example 1:

// Input: function_id = 1, z = 5
// Output: [[1,4],[2,3],[3,2],[4,1]]
// Explanation: function_id = 1 means that f(x, y) = x + y
// Example 2:

// Input: function_id = 2, z = 5
// Output: [[1,5],[5,1]]
// Explanation: function_id = 2 means that f(x, y) = x * y
#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solve(int n)
{
    
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n;
    cin>>n;
    solve(n);
    return 0;
}
