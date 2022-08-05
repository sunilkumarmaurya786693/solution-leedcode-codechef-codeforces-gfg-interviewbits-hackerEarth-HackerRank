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
        int arr[n+1];
        for(int i=0;i<=n;i++){
            cin>>arr[i];
        }
        vector<int>ans;
        for(int i=0;i<=n;i++){
            if(i*3>=arr[i]){
                ans.push_back(i);
            }
        }
        cout<<"0 0 "<<arr[0]<<"\n";

    }
    // int a=5;
    // int b=6;
    // int c=5;
    // for(int i=0;i<10;i++){
    //     int x = (a^i)+(b^i)+(c^i);
    //     cout<<i<<" "<<x<<" "<<(x^16)<<" "<<x-i*3<<"\n";
    // }
return 0;
}