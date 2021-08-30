
// 3 1 2 2

//     3 1 3 2

// {
//     8, 4, 2, 1
// }
// 2 4 8 1

//     1 2 4 8

//     6

//     (8, 4),
//     (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).

#include<bits/stdc++.h>
using namespace std;

int mergeCount(vector<int>&arr, int start1, int end1, int mid){
    
    int size1= end1-start1+10;
    vector<int>temp(size1,0);
    int k=0;
    int i=start1;
    int j=mid+1;
    int count=0;
    while(i<=mid && j<=end1){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else {
            int position= mid-i+1;
            count=count+position;
            temp[k++]=arr[j++];
        }
    
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=end1){
        temp[k++]=arr[j++];
    }
    k=0;
    while(start1<=end1)arr[start1++]=temp[k++];
    return count;
}

int inversionCount(vector<int>&arr, int start1, int end1){
    if(start1>=end1){
        return 0;
    }

    int mid= (start1+end1)/2;
    int count1= inversionCount(arr, start1, mid);
    int count2= inversionCount(arr, mid+1, end1);
    int count3= mergeCount(arr,start1,end1,mid);
    return count1+count2+count3;
}

int main(){


    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<inversionCount(arr,0, n-1)<<"\n";


    return 0;
}
