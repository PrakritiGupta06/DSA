#include<bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int u;
    int v;
    int wt;
    node(int first, int second,int weight)
    {
        u = first;
        v = second;
        wt = weight;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<node> edges;
    for (int i = 0; i < m;i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }
    int src;
    cin >> src;

    int inf = 10000000;
    vector<int> dist(n, inf);
    dist[src] = 0;
    //n-1 relaxation
    for (int i = 0; i <= n - 1;i++){
        for (auto it: edges){
            if(dist[it.u]+it.wt<dist[it.v]){
                dist[it.v] = dist[it.u] + it.wt;
            }
        }
    }
    //nth relaxation
    int fl = 0;
    for(auto it:edges){
        if(dist[it.u]+it.wt<dist[it.v]){
            cout << "Negative cycle" << endl;
            fl = 1;
            break;
        }
    }
    //print--->dist vector
    if(!fl){
        for (int i = 0; i < n;i++){
            cout << i <<" "<< dist[i] << endl;
        }
    }
    return 0;
}