#include<bits/stdc++.h>
using namespace std;
// 7
// 7 3 9 8 7 2 1
// output
// 1 2 7 8 9 3 7
int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
