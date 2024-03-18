adj = [] # declare an empty adjacency list

visited = dict() # that will be track all values to handle infinity recursion

primaryAns = []
finalAns = [] # this will be a 2D list

def dfs(u):
    global primaryAns
    global visited
    primaryAns.append(u)
     # push value
    visited[u] = True
    for number in adj[u]:
        isVisited = visited.get(number, False) # after checking that if that is not visited that will return false

        if not isVisited:
            dfs(number)



def main():

    global adj
    global visited
    global finalAns
    global primaryAns

    # now make that adjacency list to a 2D list with 1000 size
    for i in range(1, int(1e3+7), 1):
        adj.append(list()) # append an empty list

    # input process
    
    node, edge = map(int, input("Enter total number of nodes and total number of edges by space separately: ").split())
    #

    ############  iterate loop to input graph ###############
       


    for i in range(1, edge+1):
        nodeA, nodeB = map(int, input("Enter First Node and Other Connected node space separately :").split())


        adj[nodeA].append(nodeB) # necessary for both directed and undirected graph
        adj[nodeB].append(nodeA) # necessary for directed graph only

    ################## apply dfs #############
        
    for i in range(1, node+1):
        if visited.get(i, False):
            continue
        elif len(adj[i]): # check if that adjacency list is exist or not
            dfs(i)
            finalAns.append(primaryAns)
            primaryAns = [] # update after each iteration
    


    ############### Printing DFS Value ########
            

    for i in range(len(finalAns)):
        print(f"Connected component {i+1} :  ", end = '')
        for num in finalAns[i]:
            print(f"{num} ", end = '')
        print() # this is for printing a new line






if __name__ == "__main__":

    main()

