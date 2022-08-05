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
        intl sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i]; 
        }
        sort(arr.begin(),arr.end());
        sum=sum-n;
        if(sum%2==0 || (sum-n)%==0){
            cout<<"CHEFINA\n";
        }
        else {
            cout<<"CHEF\n";
        }
    }
return 0;
}