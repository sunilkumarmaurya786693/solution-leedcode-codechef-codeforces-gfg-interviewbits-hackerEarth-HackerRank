
az09 = > 26 + 10 = 36

    6length = 36 ^ 6

              counter = 1,
              36 ^ 6 = 10 ^ 11

                       (1)base10 =->(000000a)base36 2 = >
                                                        3 = >

                                                            1000 / sec->s1,
              s2, s3, s4 load_balance->LRU c1[3001 - 4000] 1001, c2[1001, 2000] 1002, c3[2001, 3000] 2002

                                                                                      counterService(zookeeper) =

                                                                                          enum status { active
                                                                                                            inactive
                                                                                                                block
                                                                                          }

                                                                                      user id user_name user_email password(hashed password) created_at status(enum)

                                                                                          url_store id long_url short_url(unique) user_id(null) created_at status(enum)

#include <bits/stdc++.h>
                                                                                              using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
    }
    int e;
    cin >> e;
    map<int, vector<int>> m;
    for (int i = 0; i < e; i++)
    {
        int start, end;
        cin >> start >> end;
        m[start].push_back(end);
    }
    int startNode, endNode;
    cin >> startNode >> endNode;

    queue<int> q;
    q.push(startNode);
    bool findNode = false;
    map<int, bool> visited;
    while (q.size())
    {
        int x = q.front();
        q.pop();
        // cout<<x<<" ";
        visited[x] = true;
        if (x == endNode)
        {
            findNode = true;
            break;
        }

        for (int i = 0; i < m[x].size(); i++)
        {
            int y = m[x][i];
            if (visited[y] == false)
            {
                q.push(y);
            }
        }
    }
    cout << findNode << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long int intl;
int main()
{
    intl n;
    cin >> n;
    map<intl, vector<pair<intl, intl>>> m;
    // map<intl,bool>node;

    for (intl i = 0; i < n; i++)
    {
        intl x;
        cin >> x;
        // node[x]=true;
    }

    intl e;
    cin >> e;
    for (intl i = 0; i < e; i++)
    {
        intl start, end, cost;
        cin >> start >> end >> cost;
        m[start].push_back({end, cost});
    }
    intl startNode, endNode;
    cin >> startNode >> endNode;

    priority_queue<pair<intl, intl>, vector<pair<intl, intl>>, greater<pair<intl, intl>>> q;
    q.push({startNode, 0});

    unordered_map<intl, bool> visited;
    unordered_map<intl, intl> cost;

    while (q.size())
    {
        pair<intl, intl> p = q.top();
        q.pop();
        intl node = p.first;
        intl w = p.second;
        visited[node] = true;
        for (intl i = 0; i < m[node].size(); i++)
        {
            intl a = m[node][i].first;
            intl w1 = m[node][i].second;
            if (visited[a] == false)
            {
                if (cost.find(a) == cost.end())
                {
                    cost[a] = w + w1;
                    q.push({a, w + w1});
                }
                else if (cost[a] > w + w1)
                {
                    cost[a] = w + w1;
                    q.push({a, w + w1});
                }
            }
        }
    }
    cout << cost[endNode] << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> store;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        store.push_back(x);
    }
    int e;
    cin >> e;
    map<int, vector<int>> m;
    for (int i = 0; i < e; i++)
    {
        int start, end;
        cin >> start >> end;
        m[start].push_back(end);
    }

    int startNode, endNode;
    cin >> startNode >> endNode;

    map<int, bool> points;
    for (int i = 0; i < n; i++)
    {
        int x = store[i];
        for (int j = 0; j < m[x].size(); j++)
        {
            if (m[x][j] == endNode)
            {
                points[x] = true;
            }
        }
    }
    queue<int> q;
    q.push(startNode);
    map<int, bool> visited;
    vector<int> ans;

    while (q.size())
    {
        int x = q.front();
        q.pop();
        if (points[x])
        {
            ans.push_back(x);
        }
        // if(x!=endNode)
        visited[x] = true;
        for (int i = 0; i < m[x].size(); i++)
        {
            int p = m[x][i];
            // if(p==endNode){
            //     ans.push_back(x);
            // }
            if (visited[p] == false)
            {
                q.push(p);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}