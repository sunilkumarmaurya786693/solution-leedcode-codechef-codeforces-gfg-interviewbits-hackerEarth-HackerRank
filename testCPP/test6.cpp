//44 array and magic value
#include <bits/stdc++.h>
using namespace std;
typedef long long int intl;
int main()
{
    intl n;
   cin>>n;
   vector<intl>arr(n);
   vector<intl>temp(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
       temp[i]=arr[i];
   }
   sort(arr.begin(),arr.end());
   
   intl good=0;
   intl bad=0;

   for(int i=0;i<n;i++){
       if(arr[i]==temp[i]){
           good=good+arr[i];
       }else{
           bad=bad+arr[i];
       }
   }
   cout<<good-bad<<"\n";
    return 0;
}
