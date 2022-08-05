#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;

pair<int,int> solve(int l1, int l2, vector<pair<int,int> >&arr){
    int min_ans = l2;
    //l2 = l2+l1; //l1=5 l2 =2 -> 5,6,7
    int max1 = arr[l1].first;
    int min1 = arr[l1].second;
    for(int i=l1;i<=arr.size();i++){
        max1 = max(max1, arr[i].first);
        min1 = min(min1,arr[i].second);
        int x = min1-max1+1;
        int h = i-l1+1;
        int my_answer = min(x,h);
        if(my_answer>=min_ans){
            min_ans = my_answer;
        }
        if(x<min_ans){
            return make_pair(min_ans,i-1);
        }
    }
        return make_pair(min_ans,arr.size());
    
    
}
int main()
{
int n;
cin>>n;
vector<pair<int,int> >arr(n);
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    arr[i] = make_pair(x,y);
}
int ans=1;
for(int i=0;i<n;i++){
    pair<int,int>x = solve(i,ans,arr);
    if(x.first>ans){
        ans =x.first;
        //if(n>=10000){
            i = x.second;
        //}
    }
}
cout<<ans<<"\n";
return 0;
}
