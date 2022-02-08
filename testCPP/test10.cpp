#include<bits/stdc++.h>
using namespace std;

void mergeArray(int arr1[],int arr2[],int n,int m){
    int firstPointer=n-m-1;
    int secondPointer=m-1;
    int lastPointer = n-1;
    
    while(firstPointer>=0 && secondPointer>=0){
        if(arr1[firstPointer]>arr2[secondPointer]){
            arr1[lastPointer--]=arr1[firstPointer--];
        }else{
            arr1[lastPointer--]=arr2[secondPointer--];
        }
    }
    // while(firstPointer>=0){
    //     arr1[lastPointer--]=arr1[firstPointer--];
    // }
    while(secondPointer>=0){
        arr1[lastPointer--]=arr2[secondPointer--];
    }
}
int main() {
    freopen("i.txt", "r", stdin);  

    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n-m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    mergeArray(arr1,arr2,n,m);

    cout<<"this is merged sorted array\n";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }



return 0;
}