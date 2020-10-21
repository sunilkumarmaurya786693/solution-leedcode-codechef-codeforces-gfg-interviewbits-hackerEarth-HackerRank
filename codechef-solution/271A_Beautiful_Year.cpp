//code by Nikita Nagrale
//https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;

bool areDistinct(int n)
{
    map<int, int> dis;
    int digit;
    while (n)
    {
        digit = n % 10;
        if (dis[digit])
        {
            return false;
        }
        dis[digit] = 1;
        n /= 10;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    while (++n)
    {
        if (areDistinct(n))
        {
            cout << n << endl;
            break;
        }
    }
    return 0;
}
