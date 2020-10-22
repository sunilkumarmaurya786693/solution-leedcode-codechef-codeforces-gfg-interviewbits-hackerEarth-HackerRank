#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
vector<string>store;
void solve(int n,string ans)
{
    if(n<0)return;
    if(n==0)
    {
        store.push_back(ans);
        return ;
    }
    ans.push_back('1');
    solve(n-1,ans);
    ans.pop_back();

    ans.push_back('2');
    solve(n-2,ans);
    ans.pop_back();

    ans.push_back('3');
    solve(n-3,ans);
    ans.pop_back();
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n;
    cin>>n;
    solve(n,"");
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
