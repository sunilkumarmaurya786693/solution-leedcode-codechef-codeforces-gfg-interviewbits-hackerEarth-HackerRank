//  You are given a string str. The string str will contains numbers only, where each number stands for a key pressed on a mobile phone.
// The following list is the key to characters map
// 0 -> .;
// 1 -> abc
// 2 -> def
// 3 -> ghi
// 4 -> jkl
// 5 -> mno
// 6 -> pqrs
// 7 -> tu
// 8 -> vwx
// 9 -> yz
// 3. Complete the body of getKPC function - without changing signature - to get the list of all words that could be produced by the keys in str.
// Use sample input and output to take idea about output.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
// Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

// Input Format
// A string str
// Output Format
// Contents of the arraylist containing words as shown in sample output
// Constraints
// 0 <= str.length <= 10
// str contains numbers only
// Sample Input
// 26

// Sample Output
// [dp, dq, dr, ds, ep, eq, er, es, fp, fq, fr, fs]


#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
string keypad[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
vector<string>store;
void solve(string s,int j,int n,string ans)
{
   if(j==n){
       store.push_back(ans);
       return;}
   string s1=keypad[s[j]-'0'];
   for(int i=0;i<s1.size();i++)
   {
       ans.push_back(s1[i]);
       solve(s,j+1,n,ans);
       ans.pop_back();
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
    solve(s,0,s.size(),"");
    cout<<"[";
    for(int i=0;i<store.size();i++)
    {
        cout<<store[i];
        if(i!=store.size()-1)
        cout<<", ";
    }
    cout<<"]";
    return 0;
}
