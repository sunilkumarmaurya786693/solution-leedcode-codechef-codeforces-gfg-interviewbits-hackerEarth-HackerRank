#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
// ll m=1000000007;
int solver(int n)
{
     map<long long int,bool>m;
        m[1]=true;
        int ans=0;
        while(n)
        {
            long long int x=m.begin()->first;
            m[x*2]=true;
            m[x*3]=true;
            m[x*5]=true;
            n--;
            ans=x;
            m.erase(x);
        }
        
        return ans;
}


int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);  
    #endif
    // memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    
    cout<<solver(n);
    return 0;
}
