#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;
bool check(string x, string y, int i){
    if(x.size()==0)return false;
    int k=0;
    while(k<x.size()){
        if(i>=y.size())return false;
        if(x[k++]!=y[i++])return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string p;
        cin>>p;
        string ans="";
        int i=0;
        bool operation = false;
        // ans.push_back(p[0]);
        int possible = true;
        // ?int  = false;
        n=p.size();
        while(i<n){
            int temp =i;
            possible = check(ans,p,i);
            // cout<<ans<<" "<<possible<<"\n";
                if(possible){
                ans.append(ans);
                i= ans.size();
                operation = false;
                    continue;
                }
            if(!operation){
                ans.push_back(p[i]);
                operation = !operation;
                i=i+1;
            }
            // cout<<ans<<"\n";
            if(i==temp){
                possible = false;
                break;
            }  
        
            // cout<<ans<<"\n";
        }
        cout<<p<<" ";
        if(ans==p){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
return 0;
}