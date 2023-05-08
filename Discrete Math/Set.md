----
A set is by definition an unsorted collcetion of items. 

$\mathbb{Z}$ is normally the set of all existing integers.
$\mathbb{N}$ is the set of natural numbers $\{z \geq 0 : \forall z \in \mathbb{Z}\}$
$\mathbb{R}$ is the set og all rel numbers
$\mathbb{Q}$ is the set of all rational numbers
$U$ is the universal set
$\phi$ is the empty set.

Set Operations:

$A \cup B$ mans the set countaining all elements from $A$ and $B$ (union)
$A \cap B$ means the set of elements in both $A$ and $B$ (intersection)
Note: two sets are said to be **disjoint** if $A \cap B = \phi$

$A-B$ : set subtraction : all element in $A$ that is not in $B$
$\bar{ A}$ : is all elements in $U$ that is not in $A$ (universal set need to be defined)

The union combination:
$$\cup_{i=1}^n S_{i} = S_{1}\cup S_{2} \cup \dots S_{n}$$
The intersection combination:
$$\cap _{i=1} ^n S_{i} = S_{1} \cap S_{2} \cap \dots S_{n}$$
$S \subseteq Y$ means $S$ is a subset of $Y$ or $S=Y$
$S \subset Y$ means $S$ is a proper subset of $Y$ (all elemnt in $S$ is in $Y$ but $S\neq Y$)
Equal sets is defined as $S=Y : S \subseteq Y \land Y \subseteq S$

$|A|$ is the **cardinality** of $A$, which is the same as the count for the amount of distinctive elements in the set. 

The size of a set in a set $|\{s\}|$ is 1

if $A \subseteq B, |\{A,B\}| = 1$

$P(S)$ is the **power set** of a set, in which it includes all possible subsets in the set of $S$, including the empty set and itself.

Edge Cases:

$P(\phi) = \{\phi\}$
$P(\{\phi\}) = \{\phi, \{\phi\}\}$
$P(\{\phi,\{\phi\}\}) = \{\phi, \{\phi\}, \{\{\phi\}\},\{\phi,\{\phi\}\} \}$

For the cardinality of power sets. $|P(S)| = 2^{|S|}$

Note"
$$P(A) = P(B) \Leftarrow\Rightarrow A=B$$
