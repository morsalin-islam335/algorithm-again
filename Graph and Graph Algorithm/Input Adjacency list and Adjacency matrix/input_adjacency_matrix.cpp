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
int adj[N][N]; // initialize a 2D array with 0
int main()
{
    int node, edge; cin >> node >> edge;
    for(int i = 1; i <= node; i++)
    {
        int firstNode, secondNode; cin >> firstNode >> secondNode;
        adj[firstNode][secondNode] = 1;
        adj[secondNode][firstNode] = 1; // for undirected graph
    }

    for(int i = 1; i<= node; i++)
    {
        for(int j = 1; j < node; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
    return  0;
}