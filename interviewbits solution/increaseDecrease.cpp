#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,k,d;
    cin >> n>>k>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;
    int i=0,j=n-1;
    while(i<j){
        int diff = (arr[j]-arr[i])-d;
        if(diff>0){
            count = count+ (diff/(2*k));
            if(diff%(2*k)){
                count++;
            }
        }
        i++;
        j--;
    }
    cout<<count<<"\n";


    return 0;
}
