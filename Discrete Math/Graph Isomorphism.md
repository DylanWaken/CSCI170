----
The graph isomorphism between graphs $G_{1}=\{ V_{1},E_{1} \}$ and $G_{2}=\{ V_{2},E_{2} \}$ are satisfied when there exists a bijective function $f:V_{1}\to V_{2}$ such that $$(v_{1},v_{2})\in E_{1} \iff (f(v_{1}) ,f(v_{2}))\in E_{2}$$
Which means there is a one-to-one correspondance between the nodes on both sides of the graph, and the image of the edge relationships are satisfied in the new graph.

Two graphs are isomorphic if the degree distribution of vertices are the same.

There exists no algorithm to compute whether 2 graphs are isomorphic in polynomial time.

A **Planar graph** is a graph that isomorphic to a graph that has no cross edges. Every non-planar graph are graphs containing $K_{5}$ or $K_{3,3}$ (or some variant/disguise of them), which are fully connected graph with 5 nodes and fully connected bipartite graph of 3 nodes on both sides. 

A **Eularian circuit** is a circuit that uses all edges on a graph exactly once. It does not exist if there is a odd degree node anywhere in the graph.

All connected graphs with even degrees for all nodes contains a eularian circuit.

A **Hamiltonian Cycle** visits every node of the graph exactly once. (except the starting node)
A **Hamiltonian Path** visits every node of the graph exactly once with distinctive start and end nodes.

Identify hamiltonin cycles are NP problems with (maybe) no polynomial solution. 

