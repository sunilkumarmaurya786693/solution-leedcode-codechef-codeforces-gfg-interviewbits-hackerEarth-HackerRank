#include<bits/stdc++.h>
// #include<iostream>
typedef long long int intl;
intl INT_MAX1=10000000000000000L;
using namespace std;
int main() {
intl n,m;
    vector<vector<pair<intl,intl> > >arr(3001);
    freopen("i.txt", "r", stdin);
   cin>>n>>m;
   for(intl i=0;i<m;i++){
       intl x,y,w;
       cin>>x>>y>>w;
       pair<intl,intl>temp(y,w);
       arr[x].push_back({y,w});
       pair<intl,intl>temp1(x,w);
       arr[y].push_back({x,w});
    //    cout<<x<<" "<<y<<" "<<w<<"\n";
   }
   vector<bool>visited(n+1,false);
   vector<pair<intl,intl> >weight(n+1);
   for(intl i=0;i<=n;i++){
       visited[i]=false;
       pair<intl,intl>temp(INT_MAX1,0);
       weight[i]=temp;
    //    cout<<i<<" ->";
       for(intl j=0;j<arr[i].size();j++){
           pair<intl,intl>temp=arr[i][j];
        //    cout<<temp.first<<" ";
       }
    //    cout<<"\n";
   }
   priority_queue<pair<intl,pair<intl,intl> >,vector<pair<intl,pair<intl,intl> > >,greater<pair<intl,pair<intl,intl> > > >q;
   pair<intl,intl>temp(1,0);
    pair<intl,pair<intl,intl> >temp1(0,temp);
   q.push({0,{1,0}});
   while(q.size()){
       pair<intl,pair<intl,intl> >p= q.top();
       q.pop();
       intl w=p.first;
       intl x=p.second.first;
       intl d=p.second.second;
    //    cout<<x<<" "<<w<<" "<<d<<"\n";
       visited[x]=true;
       for(intl i=0;i<arr[x].size();i++){
           pair<intl,intl>temp= arr[x][i];
           intl y=temp.first;
           intl w1=temp.second;
           intl finalWeight=w+w1*(d+1);
        //    cout<<y<<" "<<w1<<" "<<finalWeight<<"---\n";
           if(visited[y]==false && finalWeight < weight[y].first){
               pair<intl,intl>temp(finalWeight, d+1);
               weight[y]=temp;
               pair<intl,intl>temp3(y,d+1);
               pair<intl,pair<intl,intl> >temp2(finalWeight, temp3);
               q.push(temp2);
           }
       }
   }
   for(intl i=1;i<=n;i++){
       if(i==1)cout<<0<<"\n";
       else if(weight[i].first==INT_MAX1) cout<<-1<<"\n";
       else cout<<weight[i].first<<"\n";
    //    cout<<weight[i].first<<" "<<weight[i].second<<"\n";
   }
    return 0;
}
