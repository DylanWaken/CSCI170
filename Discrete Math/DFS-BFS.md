----
The time complexity of the recursive Depth First Search algorithm is $$\sum_{v\in V} \theta (deg^+(v))$$
As the sum of all outgoing degrees for all nodes.

The time complexity of the DFS algorithm is thus $$\Theta(|V|+|E|)$$ With respect to vertices and edges, we have the linear time complexity.

Note that term $|V|$ came from the empty initialization for the nodes.

## Breadth First Search (BFS)

The time complexity of the breadth first search algorithm is $$\sum_{i} \sum_{v\in L[i]} deg^+(v)$$ We sum over all layers, and the outgoing degree for every node in the layer. Adding the empty initialization, whhich yields the runtime of : $$\Theta(|V| + |E|)$$
This algorithm is also linear runtime.

## Dijkstra's Algorithm for Shortest Path

Dijkstra's algorithm is like the modified BFS for searching minimal path.

Dijkstra's Algorithm works by iteratively selecting the node with the smallest known distance from the source node, updating the distances of its neighbors, and marking it as visited. This process is repeated until all the nodes have been visited or the target node is reached.

Here's a high-level description of Dijkstra's Algorithm:

1.  Create a set of unvisited nodes, and assign each node an initial tentative distance. Set  the distance for the source node to 0 and all other nodes to infinity.
   
2.  While there are unvisited nodes, select the node with the smallest tentative distance (let's call this node "current").
   
3.  Mark the current node as visited, meaning it will not be checked again.
   
4.  For each neighbor of the current node, calculate the distance from the source node to the neighbor through the current node. If this distance is less than the tentative distance assigned to the neighbor, update the neighbor's distance with the new value.
   
5.  Repeat steps 2-4 until all nodes have been visited, or the target node has been visited.

At the end of the algorithm, the shortest path between the source and target nodes can be reconstructed by backtracking from the target node to the source node, following the path of minimum distances.

It actually creates a tree of the shortest path from the starting node to every node.

This algorithm does not work with negative weights on edges. 