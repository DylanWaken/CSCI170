-----
In mathematics and logic, a transitive relation is a binary relation that satisfies the following property: if the relation holds between a pair of elements A and B, and it also holds between B and C, then it must hold between A and C. In other words, if A is related to B, and B is related to C, then A must be related to C.

Formally, a relation R on a set S is transitive if, for all elements A, B, and C in S, the following condition is met:
$$ (A, B) ∈ R \land (B, C) ∈ R \implies (A, C) ∈ R.$$

A common example of a transitive relation is the "less than" relation (<) on the set of real numbers. If a < b and b < c, then it follows that a < c.

The **transitive closure** of a graph says that for every pair of vertices (A, B) and (B, C) with a directed edge, there is also a directed edge from A to C (add this edge if it is not). This also means if there is a path between the nodes, there is a edge between the nodes.

The **reflexive transitive closure** means that every node also have an directed edge to itself.

A **Strongly connected graph** means that every single possible edge exists.

