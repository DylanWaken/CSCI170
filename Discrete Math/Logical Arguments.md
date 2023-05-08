----
An argument is a sequence of statements, starting with assumptions (premises) and ending with a conclusion. **The argument is valid if it is logically impossible for the premises to be true but the conclusion to be false.** If the premises are logically contradictory, then the argument is automatically valid.

Using the joint effect of multiple propositional logic. We assume that the first two arguments are true,The first two statements would imply the third statement.

$(p \Rightarrow q, \neg q) : \neg p$
$(p \Rightarrow q, q\Rightarrow r) : p \Rightarrow r$
$(p \lor q, \neg p \lor r): r \lor q$ 

The third line is referred as **Reolution**

A proof is composed of the post processing of premises into one single conclusion.

Step types:
- **Simplification**: simplify a premise
- **Modus Tollens**: $p \Rightarrow q, \neg q : \neg p$
- **Modus ponens**: $p \Rightarrow q, p : q$
- **Equivalence Rules**
- **Rule of contradiction:** $p \land \neg p = False$

Proof can be also done by using an counter example on an exsisting conclusion.

## Logical Fallacy:

1) $p \Rightarrow T : p$, a variable that imples true does not means the variable is true 
2) $p \Rightarrow q, q : p$, Affirming the consequence
3) $p \Rightarrow q, \neg p : \neg q$, denying the hypothesis
4) Circular reasoning : if $q$ is true lead to proof of $q$ is true

## Propositional Equivalence

Propositional Equivalence means two statemens are exactly same given same input states, these statements are identical, for example
$$p \Rightarrow q \equiv \neg q \Rightarrow \neg p$$
There can aso be **rule of distribution** between propositional statements when there are unlike operators:
$$p \lor(q \land r) \equiv (p \lor q) \land (p \lor r)$$
**OeMorgan's rule** of equivalence:
$$\begin{align}
\neg (p \lor q) \equiv \neg p \land \neg q \\
\neg (p \land q) \equiv \neg p \lor \neg q
\end{align}$$
In the propositional equivalence, there is no information lost, both side are strictly identical

Note: to prove an propositional equivalence, we need to prove in both directons.
(or only use quivalence in every single line of proof)

In such proofs, we shall get rid of all implications and replace these as standard operators 