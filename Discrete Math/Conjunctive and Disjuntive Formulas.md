----
A **literal** is an atomic proposition $p$ or its negation $\neg p$

A disjunction is propositional literal connected by $\lor$
A conjunction is CNF clauses connected by $\land$

For example:
$$(\neg p \lor q\lor r) \land(p \lor r)$$
- $(\neg p \lor q\lor r)$ , $(p \lor r)$is a CNF clause of literals connected by disjuntions
- $(\neg p \lor q\lor r) \land(p \lor r)$ is a CNF formula with clauses connected by conjunctions

**Conjunctive Normal Form (CNF)** is a standard form of logical expressions
A **CNF clause** is a disjunction of literals
A **CNF formula** is a conjunction of CNF clauses
- We or everything into clusters and "and" them together

**Disjunctive Normal Form (DNF)** is another standard form opposite of CNF
A **DNF clause** is a conjunction of literals
A **DNF formula** is a disjunction of DNF clauses
- We and everything into clusters and "or" them together

Note: Fundamentally every single logical statements can be converted into DNF or CNF. However, converting DNF to CNF would take exponential complexity
