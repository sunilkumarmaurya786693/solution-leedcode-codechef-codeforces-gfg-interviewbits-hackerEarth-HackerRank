#include<bits/stdc++.h>
using namespace std;
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
typedef long long int intl;
int main()
{
    SPEED
    intl t;
    cin>>t;
    while(t--){
        intl n;
        cin>>n;
        intl arr[n];
        map<intl,intl>m;
        for(intl i=0;i<n;i++){
            intl x;
            cin>>x;
            arr[i]=x;
            if(m.find(x)!=m.end()){
                m[x]++;
            }else{
                m[x]=1;
            }
            // m[x]++;
        }
        intl count=0;
        for(int i=0;i<n;i++){
            if(m[arr[i]]==1){
                count++;
            }
        }
        // for(map<intl, intl>::iterator i=m.begin();i!=m.end();i++){
        //     if(i->second ==1){
        //         count++;
        //     }
        // }
        intl ans = count/2;
        if(count%2>0){
            ans++;
        }
        cout<<ans<<"\n";

    }
return 0;
}