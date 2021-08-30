#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
void solve(vector<vector<int> >&inmatrix1, vector<vector<int> >&inmatrix2){
    int m=inmatrix1.size();
    int n=inmatrix1[0].size();
    int p=inmatrix2.size();
    int q=inmatrix2[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x = inmatrix1[i][j];
            int a = i<p && i<q ? inmatrix2[i][i]*x : -1;
            int b = i<p && j<q ? inmatrix2[i][j]*x : -1;
            int c = j<p && i<q ? inmatrix2[j][i]*x : -1;
            int d = j<p && j<q ? inmatrix2[j][j]*x : -1;

            if(a==-1 && b==-1 && c==-1 && d==-1){
                inmatrix1[i][j]=-1;
            }
            else{
                map<int,int>counter;
                vector<int>temp;
                temp.push_back(a);
                temp.push_back(b);
                temp.push_back(c);
                temp.push_back(d);

                for(int i=0;i<4;i++){
                    if(temp[i]!=-1){
                        counter[temp[i]]++;
                    }
                }
                int count=0;
                int ans=-1;

                for(int i=0;i<4;i++){
                    if(temp[i]!=-1){
                        int x= counter[temp[i]];
                        if(x>count){
                            count=x;
                            ans=temp[i];
                        }else if(x==count && ans>temp[i]){
                            ans=temp[i];
                        }
                    }
                }
                inmatrix1[i][j]=ans;
            }
        }
    }
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif

    int m,n,p,q;
    cin>>m>>n;
    cin>>p>>q;
    vector<vector<int> >inmatrix1(m,vector<int>(n));
    vector<vector<int> >inmatrix2(p,vector<int>(q));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>inmatrix1[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>inmatrix2[i][j];
        }
    }    
    solve(inmatrix1, inmatrix2);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<inmatrix1[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
