#include<bits/stdc++.h>
using namespace std;

/*by direction graph is 2 classes
        a. directed
        b. undirected
  by weight graph is 2 classes:
        a. weighted
        b. unweighted
*/


const int N = 1007;
vector<int>adj[N];
int main()
{
    int numberOfNode, numberOfEdges;
    cin >> numberOfNode >> numberOfEdges;

    for(int i = 0; i< numberOfNode; i++)
    {
        int firstNode, connectedNode; // connection between a node to another node

        cin >> firstNode >> connectedNode;

        adj[firstNode].push_back(connectedNode); // just for directed graph
        adj[connectedNode].push_back(firstNode); // both for undirected graph
    }

    for(int i = 1; i <=numberOfNode; i++)
    {   
        cout << "list" <<" " <<i <<"\n";
        for(int val: adj[i])
        {
            cout << val << " ";
        }
        cout << "\n";

    }
    
    return 0;
}