// 1. You are given a string str of digits. (will never start with a 0)
// 2. You are required to encode the str as per following rules
//     1 -> a
//     2 -> b
//     3 -> c
//     ..
//     25 -> y
//     26 -> z
// 3. Complete the body of printEncodings function - without changing signature - to calculate and print all encodings of str.
// Use the input-output below to get more understanding on what is required
// 123 -> abc, aw, lc
// 993 -> iic
// 013 -> Invalid input. A string starting with 0 will not be passed.
// 103 -> jc
// 303 -> No output possible. But such a string maybe passed. In this case print nothing.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
// Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

// Input Format
// A string str
// Output Format
// Permutations of str in order hinted by Sample output
// Constraints
// 0 <= str.length <= 10
// Sample Input
// 655196

// Sample Output
// feeaif
// feesf

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solve(string s,int n,int i,string ans)
{
    if(i==n)
    {   cout<<ans<<"\n";
        return;
    }
    int x=s[i]-'0';
    if(x>0){
    ans.push_back('a'+x-1);
    solve(s,n,i+1,ans);
    ans.pop_back();}
    if(x<3 && x>0 && i+1<n)
    {
       int y=s[i+1]-'0';
       int num=x*10+y;
       if(num>=1 && num<=26)
       {
           ans.push_back('a'+num-1);
           solve(s,n,i+2,ans);
           ans.pop_back();
       }
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
    solve(s,s.size(),0,"");
    return 0;
}
