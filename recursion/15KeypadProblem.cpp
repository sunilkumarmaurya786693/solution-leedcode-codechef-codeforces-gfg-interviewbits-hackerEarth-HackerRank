#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
string keypad[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
void solve(string s,int i,int n)
{
   if(i==n)return;
   string s1=keypad[s[i]-'0'];
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    string s;cin>>s;
    solve(s,0,s.size());
    return 0;
}
