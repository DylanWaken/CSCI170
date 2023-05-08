-----
## 1:

a) $\neg(\neg p \land \neg q \land \neg r)$
b) $\neg(\neg(\neg(p \land \neg q)\land \neg(\neg p \land q) \land \neg r)$

## 2:

a) $(b_{0} \land \neg a_{0}) \lor (a_{0} \land \neg b_{0})$
b) $(a_{2} \land a_{1} \land \neg a_{0}) \lor (\neg a_{2} \land a_{1} \land a_{0})$    //110 = 6, 011 = 3
c) 
a = b -> a_1 iff b_1 and a_2 iff b_2 and not a_3
Where:
$\neg a_{2} \land (a_{1} \Rightarrow b_{1}) \land (a_{0}\Rightarrow b_{0}) \land (a_{1} \Leftarrow b_{1}) \land (a_{0} \Leftarrow b_{0})$

And we would have:
$a_{2} \land (\neg a_{1} \lor b_{1}) \land (\neg b_{1} \lor a_{1}) \land (\neg a_{0} \lor b_{0}) \land (\neg b_{0} \lor a_{0})$

## 3:

We assmue professor 1, 2, 3 are correspondant to $a_{1}, a_{2}, a_{3}$

The prompt is given as: $a_{1} \land a_{2} \land a_{3}$

Professor 3 says the prompt is false, which means $\neg (a_{1} \land a_{2} \land a_{3})$
or $\neg a_{1} \lor \neg a_{2} \lor \neg a_{3}$

There are at least 1 professor that do not want coffee

Professor 1 indicates that he do not know, which means it is necessary for him to have coffee, or the prompt would be wrong.

It is the same for professor 2

Professor 3 denied the prompt so he is the one with no coffee.

In the end, professor 1 and professor 2 have coffee

## 4:

$p$ := Rain, $q$ := Snow, $r$ := Cold

Premise 1:  $p \lor q$
Premise 2: $q \Rightarrow r$ , 
Premise 3: $\neg p$

For all these statements to be true: 

1: $q$               - Simplification and inference from Premise 1 and 3
2: $\neg q \lor r$    - Logical Equivalence of Premise 2
3: $F \lor r$      - Logical inference combining proof 1 and 2

Conclusion is true, $r$ can only be $T$ , the statements will still be true.

## 5:

1)
Premise 1 : $p \land (q \lor r)$
Premise 2 : $\neg q$

For all these statements to be true:

1: $p \land (F \lor r)$ Logical Inference from Pre 1 and Pre 2
2: $p \land r$             Logic equivalence of Proof 1

Conclusion proved 

2)
Premise 1: $p \Rightarrow q$
Premise 2: $p \Rightarrow \neg q$

For all these statements to be true:

1: $\neg q : \neg p$          Modus Tollens from  Pre 1
2: $q : \neg p$             Modus Tollens from Pre 2
3: $\neg p$                   Simplification of Proof 1 and Proof 2

Conclusion Proved 

## 6:

$(p \Rightarrow r) \lor (q \Rightarrow r)$

1: $(\neg p \lor r) \lor (\neg q \lor r)$        Logical Equivalence
2: $(\neg q \lor \neg p) \lor r$                   Logical Equivalence : Rule of redistributrion
3: $\neg(p \land q) \lor r$                      De Morgan's Law
4: $(p \land q) \Rightarrow r$                       Equivalence


