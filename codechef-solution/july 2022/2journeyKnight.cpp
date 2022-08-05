#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
         int step  = abs(x1-x2)+ abs(y1-y2);
         if(step%2){
            cout<<"NO\n";
         }else{
            cout<<"YES\n";
         }

    }
return 0;
}