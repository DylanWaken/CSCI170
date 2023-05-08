----
## Example
Any propositional logic formula can be written equivalently in CNF exptression. 

A logic formula can be described:

- $a$ or $\neg a$ where $a$ is an atomic orioisatuibL
- $(y \land z)$, where $yz$ are logic formulas
- $(y \lor z)$, where $yz$ are logic formulas

If $X=a$ or $X=\neg a$, then $X$ is already in CNF, which is the Base Case.

I.H. : 
- $X = (y \land z)$ is already in CNF if $yz$ are both in CNF 
I.S. :
- $y \land z$ is CNFs linked together using and, so $y\land z$ must be in CNF

I.H. :
- $X=(y\lor z)$ can be turned into CNF given $yz$ is in CNF
I.S. :
- $X = y \lor z$
- if x and y are singole clause, then the expression is already CNF
- Otherwise, asume $y = y_{1}\land \dots \land y_{n}$. if $z$ is a single clause, we can derive that the funcction is $X = (y_{1} \lor z)\land\dots \land(y_{n}\land z)$, which is in CNF
- Assume $y = y_{1}\land\dots \land y_{n}, z = z_{1}\land\dots \land z_{n}$ , then we distribute the or operation across all combinations: which would also yield a CNF expression 

## First Order logic:

In propositional logic, predicate $p(n) = n$ will become proposition when it takes on values allowed in its domain. 

Quantificational logic allows variables (prexdicator) and quantifiers including $\exists$ and $\forall$

Quantifiers have its demorgan's as:
$$\begin{align}
&\neg \forall xP(X) = \exists x \neg P(X) \\
&\neg\exists xP(X) = \forall x \neg P(X)
\end{align}$$
Use if-then more for universal quantifiers. 

The compositions looks like this
$$\begin{align}
&\forall x (A(x)\implies B(x)) \\
&\exists x(A(x)\land\neg B(x)) \\
&\neg \forall x (A(x)\land B(x))
\end{align}$$
These statements are equivalent of saying being $A$ implies $B$

We can distribute $\forall$ over logical ands and $\exists$ over logical ors, as:
$$\begin{align}
&\forall x(P(x) \land Q(x)) \equiv \forall x P(x)\land \forall x Q(x) \\
&\exists x (P(x)\lor Q(x)) \equiv \exists xP(x) \lor \exists x Q(x)
\end{align}$$
we can have quantifiers for different variables connected usng land and lor:
$$\exists x \forall y (P(x)\land Q(y))$$
- as an example

