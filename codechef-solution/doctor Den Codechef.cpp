#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
typedef long long int ll;
ll m=1000000007;
int main(){
    // SPEED;
   ll t;
   cin>>t;
   while(t--)
   {
       ll n,x;
       cin>>n>>x;
       ll arr[n];
       for(ll i=0;i<n;i++)
       cin>>arr[i];
       sort(arr,arr+n);
       ll index=-1;
       for(ll i=0;i<n;i++)
       {
           if(x>arr[i])
           {
           index=i;
           }
       }
    //    cout<<"\n"<<"\n";
       ll ans=index+1;
       ll ans2=index;
       ll count2=0;
       ll x2=x;
       ll count=0;
       for(ll i=index+1;i<n;i++)
       {
           ll p=1;
           while(x<arr[i])
           {
               x=x*2;
               p++;
           }
        //    cout<<arr[i]<<" "<<x<<" "<<p<<"\n";
           x=min(2*x,2*arr[i]);
           count=count+p;
       }
       ans=ans+count;

       if(index==-1)index=0;
       for(ll i=index;i<n;i++)
       {
           ll p=1;
           while(x2<arr[i])
           {
               x2=x2*2;
               p++;
           }
        //    cout<<arr[i]<<" "<<x<<" "<<p<<"\n";
           x2=min(2*x2,2*arr[i]);
           count2=count2+p;
       }
       if(ans2==-1)ans2=0;
       ans2=ans2+count2;
       ans=min(ans,ans2);
       cout<<ans<<"\n";

   }
    return 0;
}
