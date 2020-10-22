#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
void solveInc(int n)
{
    if(n==0)return;
    solveInc(n-1);
    cout<<n<<"\n";
}
void solveDesc(int n)
{
    if(n==0)return;
    cout<<n<<"\n";
    solveDesc(n-1);
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n;
    cin>>n;
    solveDesc(n);
    solveInc(n);
    return 0;
}
