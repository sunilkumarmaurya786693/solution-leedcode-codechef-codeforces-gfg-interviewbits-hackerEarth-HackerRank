// 1  2  3  4  5
// 6  7  8  9  10
// 11 12 13 14 15
// 16 17 18 19 20

// 1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 14 13 12


// l-r
// t- b
// b-l 
// b-t

// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33

// min(n,m)/2

// 00   n-i,m-i
// 11
// 22

#include<bits/stdc++.h>
using namespace std;

void printSpiral(vector<vector<int> >&arr, int n, int m){

    int i=0;
    int j=0;
    n--;
    m--;

while(i<=n && j<=m){
    for(int k=j;k<=m;k++){
        cout<<arr[i][k]<<" ";
    }
    i++;
    if(i>n || j>m){
        break;
    }

    for(int k=i;k<=n;k++){
        cout<<arr[k][m]<<" ";
    }
    m--;
    if(i>n || j>m){
        break;
    }
    for(int k=m;k>=j;k--){
        cout<<arr[n][k]<<" ";
    }
    n--;
    if(i>n || j>m){
        break;
    }
    for(int k=n;k>=i;k--){
        cout<<arr[k][j]<<" ";
    }
    j++;
    if(i>n || j>m){
        break;
    }
}


}

int main(){
    
     #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif

    int n,m;
    cin>>n>>m;

    vector<vector<int> >arr(n, vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }

    printSpiral(arr, n, m);

    return 0;
}
