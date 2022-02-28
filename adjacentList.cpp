#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> adjacent[n + 1];
    //vector<pair<int, int>> adjacent[n + 1];
    for (int i = 0; i < m;i++)
    {
        int u, v;
        //int wt;
        cin >> u >> v;
        //cin >> wt;
        adjacent[u].push_back(v);
        //adjacent[u].push_back({v,wt});
        adjacent[v].push_back(u);
    }
    return 0;
}