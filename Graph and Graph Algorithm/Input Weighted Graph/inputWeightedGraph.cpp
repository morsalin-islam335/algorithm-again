#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
vector<pair<int , int>>adj[N]; // initialize a 2D vector
int main()
{
    /*
        input format:
                total_node total_edges
                node1 node2 weight
                node3 node4 weight
                .................
                .................
            
    */

    int numberOfNode, numberOfEdges;
    cin >> numberOfNode >> numberOfEdges;   
    
    /*
            now iterate loop numberOfEdges times to take input and set connection
    */

    for(int i = 1; i <= numberOfEdges; i++)
    {
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        adj[node1].push_back(make_pair(node2, weight)); // for directed and undirected
        adj[node2].push_back(make_pair(node1, weight)); // for both directed and undirected

    }

    for(int i = 1; i<= numberOfNode; i++)
    {
        cout << "list" << i << " :";
        for(auto j: adj[i])
        {
            cout << "(" << j.first << " " << j.second << ") ";
        }
        cout << "\n";
    }
    return 0;
}