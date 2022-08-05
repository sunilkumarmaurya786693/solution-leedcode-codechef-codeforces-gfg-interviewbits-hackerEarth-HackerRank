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
        vector<int>arr(n);
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        // vector<vector<int> >ans;
        int ans=0;
        while(m.size()){
            map<int,int>::iterator it;
            vector<int>store;
            int index=1;
            vector<int>deleteKey;
            for(it=m.begin();it!=m.end();it++){
                int x = it->first;
                int count1 = it->second;
                int maxcount =1;
                maxcount = min(count1, x-index+1);
                count1 = count1-maxcount;
                if(count1<0)count1=0;
                // cout<<x<<" "<<maxcount<<" "<<count1<<"\n";
                while(maxcount--){
                    store.push_back(x);
                    index++;
                    m[x]--;
                }
                if(count1==0){
                    // cout<<x<<"->";
                    deleteKey.push_back(x);
                } 
            }
            for(int i=0;i<deleteKey.size();i++){
                // cout<<deleteKey[i]<<" ";
                // if(k>0)
                m.erase(deleteKey[i]);
            }
            // cout<<"\n";
            // ans.push_back(store);
            ans++;
        }
        cout<<ans<<"\n";

    }
return 0;
}