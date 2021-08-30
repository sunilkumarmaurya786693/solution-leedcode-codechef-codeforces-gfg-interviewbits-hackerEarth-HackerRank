#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int> >&A)
{
        priority_queue <int, vector<int>, greater<int> > pq;
        sort(A.begin(), A.end());
        int i = 0, res = 0, n = A.size();
        for (int d = 1; d <= 100000; ++d) {
            while (pq.size() && pq.top() < d)
                pq.pop();
            while (i < n && A[i][0] == d)
                pq.push(A[i++][1]);
            if (pq.size()) {
                pq.pop();
                ++res;
            }
        }
        return res;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector< vector<int> >events(n);
    for(int i=0;i<n;i++){
        int s,e;
        cin>>s>>e;
        vector<int>temp(2);
        temp[0]=s;
        temp[1]=e;
        events[i]= temp;
    }
    cout<<solve(events)<<"\n";
    return 0;
}