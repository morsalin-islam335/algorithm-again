N = int(1e3)

# declare a 2D matrix with 0

adj = []

for i in range(N):
    list = []
    for j in range(N):
        list.append(0)
    adj.append(list)


node = int(input("Enter total node:"))
edge = int (input("Enter total edges :"))


for i in range(edge):
    u, v = map(int, input("Enter node1 and node2 :").split())
    adj[u][v] = 1 # for directed only
    adj[v][u] = 1 # for both directed and undirected

for i in range(1, node+1):
    for j in range(1, node+1):
        print(adj[i][j], " ", end = '')
    print() # just print a new line
