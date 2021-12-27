#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

int n, m;
vector <int> G[N];
bool visit[N];
queue <int> q;

void BFS(int i)
{
    q.push(i);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
     
        visit[u] = true;

        for(int v : G[u])
            if(!visit[v])
        {
            q.push(v);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    for(int i = 1 ; i <= n ; i++)
        if(!visit[i]) BFS(i);
}
