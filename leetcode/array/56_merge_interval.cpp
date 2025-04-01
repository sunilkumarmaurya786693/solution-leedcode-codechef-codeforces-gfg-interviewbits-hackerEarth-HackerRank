#include "../../stdc++.h"
using namespace std;

static bool compare(vector<int>&a, vector<int>&b){
    if(a[0]==b[0])return a[1]<b[1];
    return a[0]<b[0];
}
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end(),compare);
    vector<vector<int>>ans;
    for(int i=0;i<intervals.size();i++){
        int start = intervals[i][0];
        int end = intervals[i][1];
        // cout<<"merge - "<<start<<" "<<end<<"\n";
        while(i<intervals.size() && end>=intervals[i][0]){
            end=max(end,intervals[i][1]);
            i++;
        }
        i--;
        ans.push_back({start, end});
    }
return ans;
}

int main(){
    int a = INT_MIN;
    int n;
    cin>>n;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        int s;
        int e;
        cin>>s>>e;
        vector<int>temp;
        temp.push_back(s);
        temp.push_back(e);
        arr.push_back(temp);
    }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i][0]<<" ->"<<arr[i][1]<<"\n";
    // }
    vector<vector<int>>ans= merge(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
    }
    cout<<"finished";
}
