#include <bits/stdc++.h>

using namespace std;

int merge(vector<int>&arr, int l1, int r1, int l2, int r2){
    int count=0;
    vector<int>temp;
    int l=l1;
    while(l1<=r1 && l2<=r2){
        if(arr[l1]>arr[l2]){
            count+=(r1-l1+1);
            temp.push_back(arr[l2++]);
        }else{
            temp.push_back(arr[l1++]);
        }
    }
    while(l1<=r1){
        temp.push_back(arr[l1++]);
    }
    while(l2<=r2){
        temp.push_back(arr[l2++]);
    }
    for(int i=0;i<temp.size();i++){
        arr[l++]=temp[i];
    }
    return count;
}

int mergeSort(vector<int>&arr, int l ,int r){
    cout<<l<<" "<<r<<"\n";
    if(l>=r){
        return 0;
    }

    int m=(l+r)/2;
    int left= mergeSort(arr,l,m);
    int right = mergeSort(arr,m+1,r);
    int count = merge(arr,l,m,m+1,r);
    return left+right+count;
}

int inversionCount(vector<int> &arr) {
    int l=0;
    int r= arr.size()-1;
    int count = mergeSort(arr,l,r);
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<inversionCount(arr)<<"\n";
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
    }
}