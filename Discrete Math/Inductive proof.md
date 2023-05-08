----
To use inductive proof on an hypothesis, the proof by checking whether the first element (the samllest possible value) works in the array. This is called a base case:
$$h(x_{1}) = f(x_{1}) ?$$
Then, we can assume that the formula works for the $n$ th element, and see whether the theorem also applies for the $n+1$ th element as:
$$h(x_{k+1}) | (h(x_{n})=f(x_{k})) = f(x_{k+1})? $$
And the inductive proof would complete.

## Strong Induction:

The strong induction is more powerful than the weak induction above, it is based on the idea that given:
$$h(x_{1}),\dots,h(x_{n})$$ Are all true in the induction hypothesis, when we are look to prove $h(x_{n+1})$ is true.

