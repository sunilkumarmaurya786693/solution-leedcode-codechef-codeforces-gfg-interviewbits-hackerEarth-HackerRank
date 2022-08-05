#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;
int main()
{
//use double quote
// freopen('i.txt', 'r', stdin);
    int n,m;
    cin>>n>>m;
    string s[n];
    string t[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cin>>t[i];
    }

    vector<vector<int> > dp(n+1,vector<int>(n+1,-1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else{
                if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    }
    cout<<dp[n][n]*m<<"\n";

return 0;
}