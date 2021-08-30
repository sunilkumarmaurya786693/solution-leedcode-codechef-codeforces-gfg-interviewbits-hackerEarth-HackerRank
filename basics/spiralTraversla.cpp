#include <bits/stdc++.h>
using namespace std;

//this function will print spiral traversal of given matrix
void spiralTraversal(vector<vector<int> > &matrix, int n, int m)
{
    if (n == 0)
        return;

    int steps = min(n, m);
    steps = steps % 2 == 1 ? steps / 2 + 1 : steps / 2;
    int p = 0;
    while (p < steps)
    {
        int i = p;
        int j = p;

        // horizontal left to right traversal
        while (j <= m - p - 1)
        {
            cout << matrix[i][j] << " ";
            j++;
        }
        // vertical traversal top to bottom
        i++;
        j = m - p - 1;
        while (i <= n - p - 1)
        {
            cout << matrix[i][j] << " ";
            i++;
        }

        // horizontal right to left traversal

        i = n - p - 1;
        j--;
        while (i != p && j >= p)
        {
            cout << matrix[i][j] << " ";
            j--;
        }

        // vertical traversal bottom to top
        j = p;
        i--;
        while (j != m - p - 1 && i > p)
        {
            cout << matrix[i][j] << " ";
            i--;
        }
        p++;
    }
}

int main()
{


    int n, m;
    cin >> n >> m;
    vector<vector<int> > matrix(n, vector<int>(m));

//taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    spiralTraversal(matrix, n, m);
    return 0;
}