#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
using namespace std;
typedef long long int ll;
ll m=1000000007;

int main()
{
    SPEED;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string ans="";
        int n=s.size();
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='0' && s[i+1]=='1')
            {
                ans.push_back(s[i]);
            }
            else
            {
                ans.push_back('0');
            }
            
        }
             ans.push_back('0');
        cout<<ans;
        cout<<"\n";
    }
    return 0;
}

// 9
// 1001000
// 1110000
// 0001111
// 1111000
// 1101010
// 0001110
// 0101010
// 1100011
// 1011100


// 1001000
// 1110000
// 0000000
// 0111000
// 0101010
// 0000010
// 0101010
// 1100000
// 1001100
