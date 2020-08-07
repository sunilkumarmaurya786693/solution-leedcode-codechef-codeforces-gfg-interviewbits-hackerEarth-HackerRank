// 1. You are given a string str.
// 2. Complete the body of printPermutations function - without changing signature - to calculate and print all permutations of str.
// Use sample input and output to take idea about permutations.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
// Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

// Input Format
// A string str
// Output Format
// Permutations of str in order hinted by Sample output
// Constraints
// 0 <= str.length <= 7
// Sample Input
// ABC

// Sample Output
// ABC
// ACB
// BAC
// BCA
// CAB
// CBA

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solve2(string s,int n,int p,vector<bool>&store,string ans)
{
    if(p==n)
    {
      cout<<ans<<"\n";
        return;
    }
     for(int i=0;i<n;i++)
     {
         if(store[i]==false)
         {
             store[i]=true;
             ans.push_back(s[i]);
             solve2(s,n,p+1,store,ans);
             ans.pop_back();
             store[i]=false;
         }
     }
}
void solve1(string s,int n,int i)
{
    if(i==n)
    {
        cout<<s<<"\n";
        return;
    }
    for(int x=i;x<n;x++)
    {
        swap(s[i],s[x]);
        solve1(s,n,i+1);
        swap(s[i],s[x]);
    }
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    string s;
    cin>>s;
    vector<bool>store(s.size(),false);
    // solve1(s,s.size(),0);
    string ans="";
    solve2(s,s.size(),0,store,ans);
    return 0;
}
