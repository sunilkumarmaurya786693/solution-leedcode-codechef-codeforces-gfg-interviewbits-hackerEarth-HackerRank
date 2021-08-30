// 43 closet to zero
#include<iostream>
using namespace std;

int main() {
    
   int n;
   cin>>n;
   int arr[n];
   
   for(int i=0;i<n;i++) cin>>arr[i];

   int ans=1000;
   for(int i=0;i<n;i++){
       int x=abs(arr[i]);
       if(x<ans){
           ans=arr[i];
       }else if(x == abs(ans) && arr[i]>0){
           ans=arr[i];
       }
   }
   cout<<ans;
    return 0;
}