// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a. The numbers can be 1 or 0 only.
// 4. You are standing in the top-left corner and have to reach the bottom-right corner. 
// Only four moves are allowed 't' (1-step up), 'l' (1-step left), 'd' (1-step down) 'r' (1-step right). 
// You can only move to cells which have 0 value in them. You can't move out of the boundaries or in the cells which have value 1 in them (1 means obstacle)
// 5. Complete the body of floodfill function - without changing signature - to print all paths that can be used to move from top-left to bottom-right.

// Note1 -> Please check the sample input and output for details
// Note2 -> If all four moves are available make moves in the order 't', 'l', 'd' and 'r'

// Input Format
// A number n
// A number m
// e11
// e12..
// e21
// e22..
// .. n * m number of elements
// Output Format
// trrrdlt
// tlldrt
// .. and so on
// Constraints
// 1 <= n <= 10
// 1 <= m <= 10
// e1, e2, .. n * m elements belongs to set (0, 1)
// Sample Input
// 4
// 3
// 0 1 1 
// 0 0 1 
// 1 0 0 
// 0 1 0 

// Sample Output
// drdrd

#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
int arr[11][11];
bool visited[11][11];
void solve(int n,int m,int i,int j,string ans)
{
        if(i>=n || j>=m || i<0 || j<0 || arr[i][j]==1)
        return;
        if(i==n-1 && j==m-1)
        {
            cout<<ans<<"\n";
            return;
        }
        if(i-1>=0 && i-1<n && j>=0 && j<m && visited[i][j]==false){
            ans.push_back('t');
            visited[i][j]=true;
            solve(n,m,i-1,j,ans);
            ans.pop_back();
            visited[i][j]=false;
        }

        if(j-1>=0 && j-1<m && i>=0 && i<n && visited[i][j]==false){
            visited[i][j]=true;
            ans.push_back('l');
            solve(n,m,i,j-1,ans);
            ans.pop_back();
            visited[i][j]=false;
        }

if(i+1>=0 && i+1<n && j>=0 && j<m && visited[i][j]==false){
            visited[i][j]=true;
            ans.push_back('d');
            solve(n,m,i+1,j,ans);
            ans.pop_back();
            visited[i][j]=false;
        }

        if(j+1>=0 && j+1<m && i>=0 && i<n && visited[i][j]==false){
            visited[i][j]=true;
            ans.push_back('r');
            solve(n,m,i,j+1,ans);
            ans.pop_back();
            visited[i][j]=false;
        }


}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            visited[i][j]=false;
        }
    }
    solve(n,m,0,0,"");
    return 0;
}
