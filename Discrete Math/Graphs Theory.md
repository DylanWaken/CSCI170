----
The graph is a set  of vertices and edges, as:
$$G = \{ V,E \}$$
For a directed graph, the positive degree of a vertex is the number of edges commming to the vertex, the negative degree is the number of edges leaving the vertex. 

The sum of total in-degrees of all vertices is the size of the edge set, as:
$$\sum_{i} d(V_{i})^+ = |E|$$
This is called the handshake rule. 

A **Walk** is a sequence of nodes:
$$v_{1},\dots,v_{k} \in V$$
such that $$\forall i\in [1,k-1] ,\exists e\in E = <V_{i},V_{i+1}> $$
A **Path** is a walk but have no repeating nodes in it. All nodes are only allowed to be accessed once.

A **circuit** is a walke that ends at its start.

A **cycle** is a circuit that access all nodes except the start node once.

A **strongly connected** graph means that there exists a path between all pairs of nodes on both directions in the graph
A **weakly connected** graph means that there exists path between all pairs of nodes in the graph ignoring the direction of the edges.
A **connected** graph means there exists a path between all pairs of nodes in at least one direction in the graph

A **topological ordering** is a special ordering of the directed acyclic graphs (DAG) that all the edges goes from smaller indices to bigger indices.

Note: if every node in the graph have have an incoming edge, then the graph is not DAG.

A graph between set elements can be regarded as internal relations between the elements in the set. 

A graph is **reflective** if every vertex has a connection to itself.

**Irreflexive** graph is exactly the inverse

The transitive graph is **a graph such that every pair of vertices is equivalent under some element of its automorphism group**. It does not need to be connected.
$$<x,y>\in E,<y,z>\in E\implies <x,z> \in E$$
A graph is **symmetric** graph if all edges are bi-directional.
Note: we cannot have self-loops for **asymmetric** graphs (contradiction)

A graph is **antisymmetric** if:
$$<x,y>\in E,<y,x>\in E\implies x=y$$
(there exists no double directional edge, but self loops can exist)

Exg: A proper subset relationship is irreflexive, transitive, asymmetric.

An **equivalence relation** is reflexive, symmetric, and transitive.

An **order relation** is antisymmetric, transitive and either reflexive and irreflexive (strict).

**Partial orders** means that not every pair of nodes in the relation is ordered, total orders means every single node pairnis ordered. 

## Undirected Graphs

Any undirected graphs can be made into an equivalent directed graph. A directed graph is a generalization of a undirected graph. In undirected graphs, self loops are not allowed.

The Degree of a node for undirected graphs is the number of edges of a node. If self loop are allowed in special cases, it counts twice to the degree.

Given a set $A$ of nodes, $N(A)$ is the neighbor set to $A$, (or they are adjacent to any nodes in the set of $A$)

A vertex is not adjacent to itself.

The handshake law says the size of the edge set is the sum of degree of nodes in set $A$ deveded by 2, as: $$\lvert E_{A} \rvert = \frac{1}{2}\sum_{a\in A} deg(a) $$
Notations:

$C_{n}$ is a cycle graph that has n nodes and n edges that forms an cycle of n nodes. The smallest cycle graph has 3 nodes.

$K_{n}$ is the complete graph of n nodes, which means there is a edge between any pair of nodes

$Q_{n}$ is a $n$ dimensional cube (0-dot, 1-line, 2-square, 3-cube, 4-tesseract). In wich each degree here we are connecting 2 n-1-cubes in a pairwise manner of all its vertices.

Collaboration graph

Complete Bipartite graph

