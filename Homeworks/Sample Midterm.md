----
## 5:

a) $$r(t) = \begin{bmatrix}
2 \sin t \\
5t \\
2\cos t
\end{bmatrix}, r'(t) = \begin{bmatrix}
2 \cos t \\
5 \\
-2  \sin t \\
\end{bmatrix}$$
To find the unit vector, we use the L2 norm as:
$$\sqrt{ 4(\cos t)^2 + 5^2 + 4 (\sin t)^2 } = \sqrt{ 29 }$$
And through division, we have:
$$T(t) = \begin{bmatrix}
2 \cos t /\sqrt{ 29 } \\
5/\sqrt{ 29 } \\
2 \sin t / \sqrt{ 29 }
\end{bmatrix}$$
--- 
b) The curvature is defined as:
$$k = \frac{|T'(t)|}{|r'(t)|}$$
And therefore, we have
$$k = \sqrt{ (-2 \sin t /\sqrt{ 29 })^2  + (2 \cos t / \sqrt{ 29 })^2} /\sqrt{ 29 }$$
The function simplifies to:
$$\sqrt{ \frac{4}{29} \sin ^2t + \frac{4}{29} \cos^2 t} / \sqrt{ 29 }$$
And the output is constant:
$$\frac{\sqrt{ \frac{4}{29} }}{\sqrt{ 29 }} = \sqrt{ \frac{4}{29*29} } = \frac{2}{29}$$
--- -
c: The length of the curve is given as:
$$\int |r'(t)| \, dt =  \int _{0} ^{10} \sqrt{ 29 } \, dt = 10 \sqrt{ 29 } $$

