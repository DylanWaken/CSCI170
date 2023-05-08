----
Trees are undirected graphs with all following conditions: 

- The graph is connected
- The graph have no cycles
- $\lvert V\rvert = \lvert E \rvert + 1$

Note: these three conditions are true if we show any of the 2 conditions are true.

In a **rooted tree** (a directed graph), there exists a root node, in which all the directed edges pointing away from the root. 

The node in the rooted tree with no childs (outgoing edges) is regarded as a leaf node.

The subtree at node $x$ is the tree rooted at $x$ and includes all of its decendents.

A rooted tree id D-ary tree of every non-leaf nodes have less than D childs

The Height of a tree is the longest chain of nodes in the tree (from root to leaf).

THe Binary Search is the serch over a binary tree.

A pre-order traversal means forall non-leaf node, we search its first (leftmmost) unsearched child.
An in-order traversal **first visits the left child (including its entire subtree), then visits the node, and finally visits the right child (including its entire subtree)**

A In-order traversal of a binary search tree is always the sorted order.

Each arithmic formula can be converted into a tree.


