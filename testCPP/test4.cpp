#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >routePairs(int mtd, vector<vector<int> >frl, vector<vector<int> >rrl){
    int n=frl.size();
    int m=rrl.size();

    map<int, vector<pair<int,int> > >ans;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=frl[i][1]+rrl[j][1];
            cout<<sum<<"\n";
            pair<int,int>x(frl[i][0],rrl[j][0]);
            ans[sum].push_back(x);
        }
    }

    map<int, vector<pair<int,int> > >::iterator it;
    int max_point=0;
    for(it=ans.begin();it!=ans.end();it++){
        int x= it->first;
        if(x>max_point && x<=mtd){
            max_point=x;
        }
    }
    cout<<"max"<<max_point<<"\n";
    vector<vector<int> >x;
    vector<pair<int,int> >temp= ans[max_point];
    for(int i=0;i<temp.size();i++){
        vector<int>p;
        p.push_back(temp[i].first);
        p.push_back(temp[i].second);
        x.push_back(p);
    }
    return x;
}
int main() {
    freopen("i.txt", "r", stdin);   
    int t;cin>>t;while(t--){
    int mtd;
    cin>>mtd;
    int k1;
    cin>>k1;
    vector<vector<int> >frl;
    for(int i=0;i<k1;i++){
        vector<int>temp;
        int p,q;
        cin>>p>>q;
        temp.push_back(p);
        temp.push_back(q);
        frl.push_back(temp);
    }
    int k2;
    cin>>k2;
    vector<vector<int> >rrl;
    for(int i=0;i<k2;i++){
        vector<int>temp;
        int p,q;
        cin>>p>>q;
        temp.push_back(p);
        temp.push_back(q);
        rrl.push_back(temp);
    }
    cout<<"Sfdsf";
    vector<vector<int> >ans= routePairs(mtd, frl,rrl);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
    }

    }
    return 0;
}

// vector<int> findSongs(int rideDuration, vector<int> songDurations) {
// unordered_map<int,int> m;

// vector<int> ans(2);
// ans[0]=-1;
// ans[1]=-1;
// int songSum = rideDuration-30;
// if(songSum<0)return ans;
// int n = (int)songDurations.size();

// for(int i=0;i<n;i++){
//         m[songDurations[i]] = i;
// }

// for(int i=0;i<n;i++){
//       if(m.find(songSum-songDurations[i])!=m.end()&&songSum-songDurations[i]!=songDurations[i]){
//               int sIndex = m[songSum-songDurations[i]];
//               if(ans[0]!=-1){
//                       int a = (int)max(ans[0],ans[1]);
//                       int b = (int)max(songDurations[i],songDurations[sIndex]);
//                       if(b>a){
//                               ans[0]=i;
//                               ans[i]=sIndex;
//                       }
//               }else{
//               ans[0]=i;
//               ans[1]=sIndex;       
//               }
//               m.erase(songDurations[i]);
//               m.erase(songDurations[sIndex]);
//       }  
// }
// return ans;
// }
