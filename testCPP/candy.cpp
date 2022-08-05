#include <bits/stdc++.h>
using namespace std;
typedef long long int intl;
int p=0;
void solve(vector<int>&arr,int i, int n, int c, vector<int>&store){
    if(c==0){
        p++;
        for(int k=0;k<store.size();k++){
            cout<<store[k]<<" ";
        }
        cout<<"\n";
        return;
    }
    if(i>=n || c<0)return;
    solve(arr,i+1,n,c,store);
    store.push_back(arr[i]);
    solve(arr,i,n,c-arr[i],store);
    store.pop_back();
}
int main()
{
    int n;
    int c;
    cin>>n>>c;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int>::iterator ip;
    ip = std::unique(arr.begin(), arr.begin()+n);
    arr.resize(std::distance(arr.begin(), ip));
    n = arr.size();

    vector<int>store;
    solve(arr,0,n,c,store);
    if(p==0)
    {
        cout<<-1;
    }
    return 0;
}



    // int n;
    // cin >> n;
    // vector<int>arr(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int q;
    // cin >> q;
    // sort(arr.begin(),arr.end());
    // while (q--)
    // {
    //     int l;
    //     int r;
    //     cin>>l>>r;

    //     int x = lower_bound(arr.begin(),arr.end(),l) - arr.begin();
    //     int y = upper_bound(arr.begin(),arr.end(),r) - arr.begin();
    //     cout<<x<<" "<<y<<"\n";
    //     if(y>=n || arr[y]>r){
    //         y--;
    //     }

    //     cout<<(y-x+1)<<" ";

    // }