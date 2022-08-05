#include<iostream>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
typedef long long int intl;
int main()
{
    SPEED;
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        for(int i=0;i<n;i++){
            int x = (q+i)%2;
            if(x==1){
                for(int j=0;j<m;j++){
                    cout<<arr[i][j]<<" ";
                }
            }else{
                for(int j=m-1;j>=0;j--){
                    cout<<arr[i][j]<<" ";
                }
            }
        }
        cout<<"\n";
    }
return 0;
}