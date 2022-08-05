#include<bits/stdc++.h>
using namespace std;

int getMaxSubArrayLength(int arr[], int n ,int k){
    int sum=0;
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(arr[i]%k !=0){
            if(l==-1){
                l=i;
            }
            r=i;
        }
    }
    if(sum%k!=0)return n;
    else if(l==-1 || r==-1)return -1;
    else {
        int removeMinSize  = min(l+1,n-r);
        return n-removeMinSize;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int len = getMaxSubArrayLength(arr,n,k);
    if(len==-1){
        cout<<0<<"\n";
    }
    else {
        int sum=0;
        int count=0;
        for(int i=0;i<len;i++){
            sum=sum+arr[i];
        }
        if (sum % k != 0) {
            count++;
        }
        for (int i = len; i < n; i++) {
            sum = sum + arr[i];
            sum = sum - arr[i - len];
            if (sum % k != 0) {
                count++;
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}


[2,1,8,7,6,5] -> [2,5,1,6,7,8]

[1,2,3,4]  -> [1,2,4,3]

[5,3,4,9,7,6] -> [5,3,6,4,7,9]

[7,3,9,8,7,6,9,8,5,4] -> [7,3,9,8,7,8,4,5,6,9]

[4,3,2,1] -> there is not next number