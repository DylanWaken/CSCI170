-----
## 1-a

For a group of 621 people, there are at most 31 days in a month, where:
$$|P| = k \cdot |M|\quad\Rightarrow\quad k = \frac{|P|}{|M|} = 20$$
However, we also have:
$$20 \cdot |M| = 620 < 621$$
where accodring to the pigenhole principle, there must exist 
$$p_{1}, p_{2}, \dots ,p_{21} \in P$$
such that:
$$f(p_{1}) = f(p_{2}) = \dots = f(p_{21}) = M_{i} \quad i\in[1,12]$$
- Or at least 21 people have the same birthday for day of month
For thre group with 620 people, this assumption is not true as proven by countercase:
$$|M_{i}| = 20\quad\forall i\in [1,12]$$
## 1-b

For a set of integers (non-repeating) $Z$ where $|Z| = n+1$ , we can create a new set of numbers, where it is made up of the reminders of dividing by $n$, as:
$$R = \{\frac{i}{n}:\forall i \in Z\}$$
Since the size of the set of all possible reminders of an arbitrary integer devided by n $R_{0} = \{i:\forall i\in[0,n-1]\}$ is $|R_{0}| = n$ , the following must be true:
$$|R_{0}| \geq |R|\quad|Z| > |R|$$
Therefore by the pigenhole principle, there must exist $z_{1},z_{2} \in Z$ such that their reminders are equal. 

Since the difference of any 2 integers with same reminder of $n$ must be divisible by $n$, the hypothesis is proved.

## 1-c

We define the set of non-repeating integers we choose as $Z$, where $z_{i} \in [1,100] \quad\forall i \in [1,k]$. 

We define a new set of non-repeating integer pairs (order not matter in pairs): $$Z_{0} = \{(z_{i}, 101-z_{i}) : i\in[1,50]\}$$
There are in total $50$ non-repeating pairs of integers in $Z_{0}$

When $k \geq 51$, we have:
$$|Z|> |Z_{0}|$$
And by the pigenhole principle, there must exist $z_{i},z_{j}\in Z$ such that the numbers would be within the same pair $z \in Z_{0}$, and they sums up to $101$

## 2

a): $s = \neg p \land \neg q \land \neg r$
b): $s = (p \land q) \lor (q\land r) \lor (p \land r)$
c): $s = (p \oplus q) \oplus r$

## 3

a): if a number is an integer, it is neither odd nor even
b): All prime numbers else than 2 are even
c): For all usc students there exists no pair that born in a less an hour apart

## 4

a): $p \Rightarrow (q \oplus r)$
b): $s \Rightarrow p$
c): $(\neg p \lor r) \iff s$
d): $q \iff p$   (Not Correct, since the player can die without opening th door by a)
e): $s \Rightarrow r$   (Not Correct, since the player can open the door after getting the weapon and end up dead)
f): $\neg(q \land r)$  (Not Correct, the player can win the game before opening the door, and die when the door is open)



