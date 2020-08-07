#include <bits/stdc++.h>
#define pii pair<int, int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
// ll m=1000000007;
int solve(vector<vector<int>> &arr, int n, int m, vector<vector<int>> &dp, int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return 1000000000;
    if (dp[i][j] != -100000000)
        return dp[i][j];
    if (i + 1 == n)
    {
        dp[i][j] = arr[i][j];
        return arr[i][j];
    }

    int ans = solve(arr, n, m, dp, i + 1, j) + arr[i][j];
    ans = min(ans, solve(arr, n, m, dp, i + 1, j + 1) + arr[i][j]);
    ans = min(ans, solve(arr, n, m, dp, i + 1, j - 1) + arr[i][j]);
    ans = min(ans, solve(arr, n, m, dp, i, j + 1));
    dp[i][j] = ans;
    return ans;
}
int solver(vector<vector<int>> &arr)
{
    int n = arr.size(), m = arr[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -100000000));
    int ans = 1000000000;
    for (int j = 0; j < m; j++)
    {
        ans = min(ans, solve(arr, n, m, dp, 0, j));
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //         cout << dp[i][j] << " ";
    //     cout << "\n";
    // }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
#endif
    // memset(dp, -1, sizeof(dp));
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    cout << solver(arr);
    return 0;
}
