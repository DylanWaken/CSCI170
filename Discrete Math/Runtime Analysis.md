----
The typical method of analyize code runtime is the count for the amount of operations given the same large amount of data. Normally we only care about the growth rate of operations given growth of data.

For example: $O(n)$, $O(\log n)$, $O(n^2)$ are growth factor.

In the runtime analysis, we only care about the highest growth terms in the system in the polynomial runtime.And we would normally only analyze the worst case. 

Average case can be used but it is normally not well defined.

The time complexity is defined as:
$$f(n) = (O(g(n))) \to \exists c,n_{0}:n>n_{0}, f(n) \leq cg(n)$$
Alternatively, we have:
$$\lim_{  n \to \infty } \frac{f(n)}{g(n)} \leq c$$
$c$ is what we referred as the upper bound of algorithm complexity.
$n_{0}$ is a aribtrarily large enough imput size that makes the inequality true.

There also exists an lower bound notation that:
$$f(n) \geq c\Omega(g(n))$$
The final measure is $\Theta$ defined as both being the lowar bound and upper bound of an algorithm, as:
$$c_{1} \Theta (g(n)) \leq f(n) \leq c_{2} \Theta (g(n))$$
Note: these are not for best, worst and average cases, $O$ and $\Omega$ are just the metric we used to analyze algorithm operation growth rates. $\Theta$ can be derived when $O$ and $\Omega$ are the same, they would represent the knowledge we have on the algorithms. 

To change $\log_{a}x$ to $\log_{b}x$, we have the following formula:
$$\log_{a} x = \frac{\log_{b}x}{\log_{b}a}$$

Therefore, we can ignore the constants in $\log$ runtime

**Polylogorithm runtime is always better than polynimial runtimes.** 

**Polynomial runtimes are always better than exponential runtimes**

Constant runtime is the best

When runtimes from 2 categories are multiplied, the new runtime is characterized as the slower category.

Prove rule of big $O$ operations:
$$\begin{align}
&f(n) = O(h(n)), g(n) = O(h(n)), \\ 
&f(n) \leq c_{1} h(n) \quad\forall n \geq n_{1} \\ 
&g(n) \leq c_{2} h(n) \quad\forall n \geq n_{2}\\
& f(n)+g(n)=O(h(n))
\end{align}$$
Expressions of $O$ with $-$ or $/$ would normally be wrong, as it involved the constants defined in big $O$ and can work different from intuition. Expressions with $+$ and $\times$ would normally work.


