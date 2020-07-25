#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
typedef long long int intl;
intl m = 1000000007;
intl arr[34];
intl n;
intl store[11][11][11][11][11][11];
intl count1=0;
intl solve(intl p, intl prev,intl bar)
{
    
    if (p >= n)
        return 1;
    // p is person number
    // prev current person
    intl ans = 0;
    for (intl i = 1; i <= 3; i++)
    {
        intl x = prev * 10 + i;
        if (arr[x] > 0 && prev!=i)
        {
            count1++;
            arr[x]--;
            bar++;
            ans = (ans % m + solve(p + 1, i,bar) % m) % m;
            bar--;
            arr[x]++;
        }
    }
    cout<<ans<<" "<<bar<<"\n";
    // store[arr[12]][arr[13]][arr[21]][arr[23]][arr[31]][arr[32]]=ans%m;
    return ans % m;
}

int main()
{
    cin>>n;
    for (intl i = 0; i < 34; i++)
        arr[i] = INT_MAX;
    cin>>arr[12];
    cin>>arr[13];
    cin>>arr[21];
    cin>>arr[23];
    cin>>arr[31];
    cin>>arr[32];

    for(intl i1=0;i1<11;i1++){
    for(intl i2=0;i2<11;i2++){
    for(intl i3=0;i3<11;i3++){
    for(intl i4=0;i4<11;i4++){
    for(intl i5=0;i5<11;i5++){
    for(intl i6=0;i6<11;i6++){
        store[i1][i2][i3][i4][i5][i6]=-1;
    }}}}}}

    intl ans=0;
    for(intl i=1;i<=3;i++)
       ans=(ans%m+solve(1,i,1)%m)%m;
   cout<<ans<<"\n";
   cout<<count1;
    return 0;
}
