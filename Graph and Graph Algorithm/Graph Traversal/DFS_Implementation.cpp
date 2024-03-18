// the objective of this program is implement DFS

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;

vector<int>adj[N]; // declare an adjacency list
bool visited[N];

vector<vector<int>>ans; // this vector will contain another vectors
vector<int>eachComponentValues;

void dfs(int u){
    eachComponentValues.push_back(u); //push value for each connected component
    visited[u] = true;
    for(int v: adj[u]){
        if (visited[v]) continue;
        dfs(v); // recursion
    }
}

int main()
{
    int total_node, total_edges;
    cin >> total_node >> total_edges;

    for(int i = 1; i <= total_node; i++)
    {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;
        adj[nodeA].push_back(nodeB); // both for directed and undirected graph
        adj[nodeB].push_back(nodeA); // just for undirected graph

    }

    // now traversal through dfs by using connected component

    for(int i = 1; i <= total_node; i++)
    {
        if (visited[i]) continue;
        dfs(i);
        ans.push_back(eachComponentValues);
        eachComponentValues.clear();
    }


    for(int i = 0; i < ans.size(); i++)
    {
        cout << "Connected Component " << i << ": ";
        for(int val: ans[i])
        {
            cout << val << " ";
        } 
        cout << "\n";
    }
    return 0;
}