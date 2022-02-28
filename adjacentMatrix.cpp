#include<bits/stdc++.h>
using namespace std;
int main()
{
    //n=no. of nodes && m=no. of edges
    int n, m;
    cin >> n >> m;
    //declaring adjacent 2D matrix of [n+1][n+1]size =>SC=O(n^2){better is using adjacent list}
    int adj[n + 1][n + 1];//n+1 for 1 based indexing
    for (int i = 0; i < m;i++)
    {
        int u, v;
        //u & v are the name of the nodes (u)O----O(v)
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}
//DISADVANTAGE:can only create matrix for smaller no. of nodes