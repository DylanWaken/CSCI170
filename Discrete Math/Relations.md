----
An ordered set is represented through : $\langle a_{1},a_{2},\dots,a_{n}\rangle$

For a ordered set: $\langle a,b \rangle \neq \langle b, a \rangle$

The cartisian product of two sets (non-ordered) $A$ and $B$ is defined as:
$$A\times B = \{<a,b> | a\in A, n\in B \}$$
Whish is a set of all possible ordered paires between the sets, where the first element of the pair came from set $A$ and second element came from set $B$

For all sets $A,B,C\neq \phi$, if $A\times C = B\times C$, then $A=B$

A relation is a pairwise relation between elements of two sets. The relation set is a subset of the cartisian product set (there can be elements that are disconnected). 
$$Re \in\{<a,b> | a\in A, n\in B \}$$
- some elements from $A$ might be disconnected to some elements from $B$

A **function** is a subset of relations which defines a multi to one relationship.
All functions are relations, and some relations are function.
A function $f:A\to B$ is the mappoing from set $A$ to set $B$, where $A$ is the domain and $B$ is the co domain.

If a function is said to be **injective** if the relationship is one-to-one, which means the function is inversable and for each input there exists one and only one unique output.

If a function id surjective if every element in the co-domain $B$ has a pairwise relationship with one or multiple elements iin $A$

To prove injective, the process is to prove that for any 2 same objects output from the function, the input is alo the same.

A **Sequence** is a function from natural numbers to another specific set $X$. The function is not necessarily be injective.

A **Closed-form expression** is an expression that can be computed by applying a fixed number of operations to the arguments. 

A **Recurrance relation** is a relation defined in terms of itself. like:
$$f(x_{i}) = g(f(x_{i-1}))$$
Using runtime analysis, ins some cases the recursive functions can be expressed as a close-form expression.

An N-ary relation is the relation between n sets $A_{1},A_{2},\dots,A_{n}$ :
$$ <x_{1},x_{2},\dots,x_{n}> : x_{i}\in A_{i}$$
