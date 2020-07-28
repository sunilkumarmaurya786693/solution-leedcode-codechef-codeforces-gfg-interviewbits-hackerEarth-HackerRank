#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;

void solveLeft(int i,int j,int n,vector<vector<bool>>&path,vector<vector<bool>>&store)
{
    j--;
    bool check=true;
    while(j>=0)
    {
        if(check && path[j+1][j])
        {
            store[i][j]=true;
        }
        else
        {
            store[i][j]=false;
            check=false;
        }  
        j--;
    }
}
void solveRight(int i,int j,int n,vector<vector<bool>>&path,vector<vector<bool>>&store)
{
    j++;
    bool check=true;
    while(j<n)
    {
        if(check && path[j-1][j])
        {
            store[i][j]=true;
        }
        else{
            store[i][j]=false;
            check=false;
        }
        j++;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    #endif
    int t;
    cin>>t;
    for(int T=1;T<=t;T++){
     int n;
     vector<vector<bool>>path(50,vector<bool>(50,true));
     vector<vector<bool>>store(50,vector<bool>(50,true));
        cin>>n;
        string I,O;
        cin>>I>>O;
        for(int k=0;k<n;k++)
        {
            if(I[k]=='N')
            {
                for(int i=0;i<n;i++)
                {
                    if(i==k)continue;
                    path[i][k]=false;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(O[i]=='N')
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j)continue;
                    path[i][j]=false;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            store[i][j]=path[i][j];
        }
        for(int i=0;i<n;i++)
        {
            solveLeft(i,i,n,path,store);
            solveRight(i,i,n,path,store);
        }

        cout<<"Case #"<<T<<":\n";
        for(int i=0;i<n;i++)
        {
            string s="";
            for(int j=0;j<n;j++)
            {
                if(store[i][j]==1)
            s.push_back('Y');
            else
            s.push_back('N');

            }
            cout<<s<<"\n";
            
        }

    }
    return 0;
}
