----
A linear transformation from vector space $V$ to vector space $W$ is defined as:
$$T:V\to W = \begin{cases}
\forall v,w \in V, T(v+w)=T(v) + T(w) \\ \\

\forall \lambda \in \mathbb{R}, T(\lambda v) = \lambda T(v)
\end{cases}$$
//This is extremely similar to the judgement of a subspace

If $A$ is a $m\times n$ matrix, and $T_{A}: \mathbb{R}^n \to \mathbb{R}^m$ given by $T_{A}(x) = Ax$, This is a linear transformation.

For the space of smooth funtions $C^\infty(I,\mathbb{R})$, we define a transformation:
$$D:C^\infty (I,\mathbb{R})\to C^{\infty}(I,\mathbb{R}), D(f) = f''-af'+ b f$$
This is also a linear transformation

To test whether a transformation is linear or not, we can simply plug in:
$$T(u+\lambda v) = T(u) + \lambda T(v)?$$
Let $T:V\to W$ to be a linear transformation such that
$$\begin{align}
&1)\quad ker(T) = \{ u\in V:T(v) =0\} \subset V \\
&2)\quad rng(T) =\{ v \in W: \exists u\in Vs.t.T(u)=v\} \subset W \\
&3)\quad ker(T)=0 ⇔ (\forall u,v \in V, T(u)=T(v)\Rightarrow u=v) \\ 
&4) \quad dim(V) = dim (ker(T)) + dim(rng(T))
\end{align}$$
The kernel is the set of vectors in the original space that get mapped into zero in the new space, which is identical to the Null space of a matrix.

The range of a linear transofrmation is the output range of vectors from transformation process.

If the kernel contains only the zero vector, then the transformation is injective with each unique input get mapped into a unique output.

