//code by Nikita Nagrale
//https://codeforces.com/problemset/problem/306/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(m,n/m);
    n%=m;
    for(int i=0;i<m;i++)
    {
        if(n>0)
        cout<<v[i]+1<<" ";
        else cout<<v[i]<<" ";
        n--;
    }
    return 0;
}
