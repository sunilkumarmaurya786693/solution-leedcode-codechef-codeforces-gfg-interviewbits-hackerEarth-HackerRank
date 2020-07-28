#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=1000000007;

int main()
{
    // ios::sync_with_stdio(false);cin.tie(0); 
    // cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("alchemy_input.txt", "r", stdin);
    freopen("o.txt", "w", stdout);    
    #endif
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        cin>>n;
        string s;cin>>s;
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')a++;
            else b++;
        }
        int ans=0;
        if(a>b)
        ans=a-b;
        else
        ans=b-a;
        if(ans==1)
        cout<<"Case #"<<t<<": "<<"Y\n";
        else
        {
            cout<<"Case #"<<t<<": "<<"N\n";
        }
        

    }
    return 0;
}
