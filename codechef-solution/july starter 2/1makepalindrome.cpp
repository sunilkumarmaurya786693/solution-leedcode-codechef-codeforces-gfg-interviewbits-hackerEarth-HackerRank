#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        string ans0="";
        string ans1="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                ans0.push_back('0');
            }else{
                ans1.push_back('1');
            }
        }
        if(ans0.size()>ans1.size()){
            cout<<ans0<<"\n";
        }
        else{
            cout<<ans1<<"\n";
        }
    }
return 0;
}