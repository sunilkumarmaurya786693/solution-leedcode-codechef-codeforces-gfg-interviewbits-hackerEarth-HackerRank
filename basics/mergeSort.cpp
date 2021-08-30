// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long i, long long mid, long long j){
        int i1=i;
        int i2=mid+1;
        int temp[j-i+10];
        int k=0;
        int inversionCount=0;
        while(i1<=mid && i2<=j){
            if(arr[i1]<=arr[i2]){
                temp[k++]=arr[i1++];
            }else{
                cout<<"sunil---\n";
                inversionCount+=mid-i1+1;
                temp[k++]=arr[i2++];
            }
        }
        while(i1<=mid)temp[k++]=arr[i1]++;
        while(i2<=j)temp[k++]=arr[i2]++;
        k=0;
        while(i<=j)arr[i++]=temp[k++];
        return inversionCount;
    }
    long long int mergeSort(long long arr[], long long i, long long j){
        if(i>=j)return 0;
        cout<<i<<" "<<j<<"\n";
        long long mid= (i+j)/2;
        long long int l = mergeSort(arr,i,mid);
        long long int r = mergeSort(arr,mid+1, j);
        long long int m= merge(arr,i,mid,j);
        return l+r+m;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        return mergeSort(arr,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends