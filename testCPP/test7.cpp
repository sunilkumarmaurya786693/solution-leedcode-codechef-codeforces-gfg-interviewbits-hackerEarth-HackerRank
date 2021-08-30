// 42 forgotten report
#include<bits/stdc++.h>
using namespace std;

int arr[30][30];
int solve(int i, int n, vector<bool>&visited, int count, int prev, int k){
    vector<int>weight(n+1, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >q;
    q.push({1,0});
    while(q.size()){
        pair<int,int>p=q.top();
        q.pop();
        int w=p.first;
        int x=p.second;
        visited[x]=true;
        for(int i=1;i<=n;i++){
            if(arr[x][i]==0)continue;
            if(visited[i] && w+arr[x][i]<weight[i]){
                weight[i]=w+arr[x][i];
                q.push({weight[i],i});
            }
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                cin>>arr[i][j];
        } 
        vector<bool>visited(n+1,false);
        int ans=solve(1,n,visited,0,-1, k);
        cout<<ans+arr[k][1];
    }
    return 0;
}