#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int store[100][100][2];
int solve(vector<int>&p,int n,int m,int i,bool chance)
    {
        if(i>=n)return 0;
        if(store[i][m][chance]!=-1)return store[i][m][chance];
        // if(store[i][m]!=-1)return store[i][m];
        // cout<<m<<" "<<i<<" "<<chance<<"\n";
        if(chance)
        {
            int k=2*m;
            int sum=0;
            int temp=0;
            int ans=INT_MIN;
            for(int j=i;j<n && (k>0);j++)
            {
                temp++;
                sum=sum+p[j];
                k--;
                ans=max(ans,solve(p,n,max(m,temp),j+1,!chance)+sum);
                
            }
            store[i][m][chance]=ans;
            return ans;
        }
        else{
            int sum=0;
            int temp=0;
            int ans=INT_MAX;
            int k=2*m;
            for(int j=i;j<n && (k>0);j++)
            {
                temp++;
                sum=sum+p[j];
                k--;
                ans=min(ans,solve(p,n,max(m,temp),j+1,!chance)-sum);
                
            }
            store[i][m][chance]=ans;
            return ans;
        }
    }
int solver(vector<int>&arr)
{
    int n=arr.size();
        int m=1;
        bool chance=true;
        for(int i=0;i<100;i++)
        {
            for(int j=0;j<100;j++)
            {
                store[i][j][0]=-1;
                store[i][j][1]=-1;
            }
        }
        int ans=solve(arr,n,m,0,chance);
        int sum=0;
        for(int i=0;i<n;i++)sum=sum+arr[i];
        return (ans+sum)/2;
}


int main()
{
    // SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);    
    #endif
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<solver(arr);
    return 0;
}
