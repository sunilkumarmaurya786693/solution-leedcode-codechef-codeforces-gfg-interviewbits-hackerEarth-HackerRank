#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;

class Interval {
    public:
    int start;
    int end;
    Interval(int start, int end) {
        this->start = start;
        this->end = end;
    }
};
bool compare(Interval &a, Interval &b){
    return a.start < b.start;
}
int solve(vector<Interval>&arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end(),compare);
    priority_queue<int, vector<int>, greater<int> >p;
    int ans=0,count=0;
    for(int i=0;i<n;i++){
        int s=arr[i].start;
        int e = arr[i].end;
        p.push(e);
        while(p.size()>0 && p.top()<=s){
            p.pop();
        }
        int size1=p.size();
        ans=max(ans,size1);
        // cout<<arr[i].start<<" "<<arr[i].end<<"\n";
    }
return ans;

}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n;
    cin>>n;
    vector<Interval>arr;
    for(int i=0;i<n;i++){
    int start,end;
    cin>>start>>end;
    Interval temp = Interval(start,end);
    arr.push_back(temp);
    }
    cout<<solve(arr);
    return 0;
}
