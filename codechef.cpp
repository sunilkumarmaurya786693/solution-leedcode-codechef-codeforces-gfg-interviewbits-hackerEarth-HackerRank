#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
using namespace std;
typedef long long int intl;
intl m=1000000007;
    intl arr[34];
    intl n;
    intl save[100005][4];

    intl solve(intl p,intl prev,string s)
    {
        cout<<s<<"\n";
        // if(save[p][prev]!=-1)return save[p][prev]%m;
        if(p>=n){
            // cout<<s<<"\n";
            return 1;}
        // p is person number
        // prev is prev person id
        intl ans=0;
        for(intl i=1;i<=3;i++)
        {
                intl x=prev*10+i;
            // cout<<x<<"\n";
                if(arr[x]>0 && prev!=i){
                arr[x]--;
                if(i==1)s.push_back('R');
                if(i==2)s.push_back('O');
                if(i==3)s.push_back('G');
                
                ans=(ans%m+solve(p+1,i,s)%m)%m;
                s.pop_back();
                arr[x]++;
                }
            
        }
        save[p][prev]=ans%m;
        return ans%m;
    }

int main()
{
    for(intl i=0;i<100005;i++)
    {
        for(intl j=0;j<4;j++)
        save[i][j]=-1;
    }
    for(intl i=0;i<34;i++)
    arr[i]=INT_MAX;
    cin>>n;
    cin>>arr[12];
    cin>>arr[13];
    cin>>arr[21];
    cin>>arr[23];
    cin>>arr[31];
    cin>>arr[32];
    intl ans=0;
    for(intl i=1;i<=3;i++)
    {
        string s="";
        if(i==1)s.push_back('R');
        if(i==2)s.push_back('O');
        if(i==3)s.push_back('G');
        intl p=1;
       ans=(ans%m+solve(p,i,s)%m)%m;
    //    cout<<"\n\n";
    }
    cout<<(ans%m)<<"\n";

    return 0;
}
