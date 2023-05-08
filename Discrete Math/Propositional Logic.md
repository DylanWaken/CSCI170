-----
**Proposition** is a statement that declares a fact that is either true or false.
> Ex: "This statement is false" -> is not a proposition (neither true or false)

Logical operators:

- $\land$ : logical and    $1 \land 1 = 1, 1\land 0  = 0$
- $\lor$ : logical or       $1 \lor 0 = 1, 0 \lor 0 = 0, 1 \lor 1 = 1$
- $\neg$ : logical not     $\neg 1 = 0, \neg 0 = 1$
- $\oplus$ : exclusive or  $1 \oplus 0 = 1, 1\oplus 1 = 0$

There can be compound statements in propositional logic 
Propositional logic can be directly translated into digital logic

The $\neg$ operation have the highest priority. 

$\neg$ is a uniary operator that operates on only one proposition
$\land, \lor, \oplus$ are binary operators 

There are theoritically 16 possible binary operators ($2^4$)

$X \Rightarrow Y$ is an specific binary operator that means: "if $X$ then $Y$"
$$\begin{align}
&X = 1, Y=1, X\Rightarrow Y = 1 \\ 
&X = 1, Y=0, X \Rightarrow Y =0 \\
&X=0, Y=1, X\Rightarrow Y = 1 \\
&X = 0, Y = 0, X \Rightarrow Y = 1
\end{align}$$
- When the prior statement $X$ is false, then the statement would return true whatever the posterior statement $Y$ is true or false

$X \Rightarrow Y$ is the same as $X$ implies $Y$, $Y$ if $X$ , $Y$ follows from $X$, $Y$ unless not $X$ , $X$ only if $Y$ 

It is equivalent to `(not X) or Y`

These are also equivalent statements:
- $Y$ is a necessary for $X$   
- $X$ is sufficient for  $Y$
- $X$ only if $Y$

if $X$ then $Y$ is identical to $Y$ **unless not** $X$ 

$X \Rightarrow Y$ is implication
$Y \Rightarrow X$ is the converse
$\neg Y \Rightarrow \neg X$ is the contrapositive
$\neg X \Rightarrow \neg Y$ is the inverse

1,3 have the same effect, 2,4 have the same effect

If and only if is:
$$X \Leftrightarrow Y$$
And it is defined as
$$\begin{align}
&X=1, Y=1, X\Leftrightarrow Y = 1 \\
&X=0, Y=0, X\Leftrightarrow Y = 1  \\
&X=0, Y=1, X\Leftrightarrow Y = 0  \\
&X=1, Y=0, X\Leftrightarrow Y = 0 
\end{align}$$
This is exactly opposite from the exclusive or.