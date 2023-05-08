----
## Section 10.1

3:  1) C because for yz plane $(2,4,6)$ have minimal $x$
    2) A because the $y$ value is zero

7: (a) PQ=6, QR = 2 sqrt(10), PR = 6 : right = false, isosceles = true
   (b) PQ = 3, QR = 3 sqrt(5), PR = 6 : right = false, isoscleles = false

9: (a) NO    (b) YES

15: $2x^2 + 2y^2 + 2z^2 = 8x -24z +1$ :
    $2(x - 4)^2 + 2y^2 + 2(z+6)^2= +8 + 36 +1$
    $(x-4)^2 + y^2 + (z+6)^2 = \frac{45}{2}$
    which is clearly a sphere equation with center (4,0,-6) and radius of $\sqrt( \frac{45}{2})$
     
19:  1) $(x-2)^2 + (y+3)^2 + (z+6)^2 = 6^2$
       2) $(x-2)^2 + (y+3)^2 + (z+6)^2 = 2^2$
       3) $(x-2)^2 + (y+3)^2 + (z+6)^2 = 3^2$

23: all arbitrary points below the plane parallel to xz at y = 8

## Section 10.2

9: $\begin{bmatrix}-1 \\ 1\end{bmatrix} +\begin{bmatrix}6\\-2\end{bmatrix} = \begin{bmatrix}5\\2\end{bmatrix}$ 

15:
$$\begin{align}
&\begin{bmatrix}
1\\2\\-3
\end{bmatrix} + \begin{bmatrix}
-2 \\
-1 \\
5
\end{bmatrix} = \begin{bmatrix}
-1 \\
1 \\
2 \\
\end{bmatrix} \\ 
&2\begin{bmatrix}
1\\2\\-3
\end{bmatrix} +  
3\begin{bmatrix}
-2 \\
-1 \\
5
\end{bmatrix} = 
\begin{bmatrix}
-4 \\
1 \\
7
\end{bmatrix}\\ \\
&|a| = \sqrt{ 1^2 + 2^2 + 3^2 } = \sqrt{ 14 } \\
&|a-b| = \sqrt{ 82 }
\end{align}$$

## Section 10.3

3: $a \cdot b = 14$ 
5: $a\cdot b = (4\times{6} - 1\times 3 - 2) = 19$
11: 
$u \cdot w = |u| |w| \cos\left( \frac{4\pi}{3} \right) = -\frac{1}{2}$

17:
$\cos \theta = \frac{a\cdot b}{|a| |b|} = \frac{7}{\sqrt{ 26 } \sqrt{ 5 }} = \frac{7}{\sqrt{ 130 }}$
23:
Since $a$ is orthogonal to $i+j$ and $j+k$, we have:
$$a \cdot (i+j) = 0 \quad a \cdot (j+k) = 0$$
And we can simply derive that
$$a_{1}+a_{2} = 0,a_{1}+a_{3} = 0$$
Given that $a$ is a unit vector, we can solve:
$$a = \begin{bmatrix}
-\frac{1}{\sqrt{ 3 }} \\
\frac{1}{\sqrt{ 3 }} \\
\frac{1}{\sqrt{ 3 }}
\end{bmatrix}$$
33: 
If we expand the original terms, we woule have:
$$b - proj_{a} b = b - a \frac{{a \cdot b}}{|a|^2}$$
And by applying dot product, we have:
$$a \cdot b - a \cdot a \frac{{a \cdot b}}{|a|^2} = a \cdot b - a \cdot b = 0$$
And therefore these vectors are orthogonal

43:
$$\theta = \cos^{-1} \frac{{[1,1,1]^T \cdot [1,0,0]^T}}{\sqrt{ 3 }} = \cos^{-1} \frac{1}{\sqrt{ 3 }}$$
45:
$$\theta = \cos^{-1} \frac{{\left[ \frac{1}{2},-\frac{1}{2},-\frac{1}{2} \right]^T \cdot \left[ -\frac{1}{2}, \frac{1}{2}, -\frac{1}{2} \right]^T}}{\sqrt{ \frac{3}{4}}\sqrt{ \frac{3}{4} }} = \cos^{-1} -\frac{1}{3}$$
## Section 10.4

1: $$a\times b = \begin{bmatrix}
0 + 16 \\
-0 \\
48-0
\end{bmatrix} = \begin{bmatrix}
16 \\
0 \\
48
\end{bmatrix}$$7:
$$a\times b = \begin{bmatrix}
(1-t) \\
-(t-t) \\
(t^3)-t^2
\end{bmatrix} = \begin{bmatrix}
1-t \\
0 \\
t^3 - t^2
\end{bmatrix}$$
9: SInce $i\times j = k$, $(i\times j)\times k = 0$

15: $|u \times v| = |u | |v| \sin 60  = 192 \frac{\sqrt{ 3}}{2} = 96 \sqrt{ 3 }$, into the page

45: 
Since $a$ is $\vec{QR}$, $b$ is $\vec{QP}$

We have the distance formula as:
$$d = |b| \sin \theta, \quad \sin \theta = \frac{{|a\times b|}}{|a| |b|}$$
By replacement we have:
$$d = \frac{{|a\times b|}}{|a|}$$
The distancer for the points are:
$$d = \frac{{|a\times b|}}{|a|} = \frac{1}{\sqrt{ 6 }}\sqrt{ 81+64+49 } = \sqrt{ \frac{87}{3} }$$
## Section 10.5 line

3: The parametric equation is:
$$l = e + td = \begin{bmatrix}
2 \\
2.4 \\
3.5
\end{bmatrix} + t \begin{bmatrix}
3 \\
2 \\
-1
\end{bmatrix}$$
- Vector equation is just the sum of these

5: The perp line is described by normel as:
$$n = \begin{bmatrix}
1 \\
3 \\
1
\end{bmatrix}$$

And the line equation can be written as:
$$l = e + td = \begin{bmatrix}
1 \\
0 \\
6
\end{bmatrix} + t\begin{bmatrix}
1 \\
3 \\
1
\end{bmatrix}$$

15:
The line segment is given as:
$$l = e_{0} + t(e_{1}-e_{0}) = \begin{bmatrix}
2 \\
-1 \\
4
\end{bmatrix} + t \begin{bmatrix}
2 \\
7 \\
-3
\end{bmatrix} : t\in[0,1]$$
41:
The plane of 3 points can be solved with:
$$p = e_{0} + t(e_{1} - e_{0}) + s(e_{2} - e_{0})$$
Where by implementing the parameters, we have:
$$p = \begin{bmatrix}
a \\
0 \\
0
\end{bmatrix} + t \begin{bmatrix}
-a \\
b \\
0
\end{bmatrix} + s\begin{bmatrix}
-a \\
0 \\
c
\end{bmatrix}$$
And by do the cross product on the two parameterized vectors, we have
$$n = \begin{bmatrix}
bc -0 \\
0-(-ac) \\
0-(-ab)
\end{bmatrix} =
\begin{bmatrix}
bc \\
ac \\
ab
\end{bmatrix}$$
And the plane equation is then
$$bcx +acy + abz -abc = 0$$
45:

Parallel : $n(P_{2}) = \frac{4}{3} n(P_{3}), n(P_{1}) = 3n (P_{4})$
Identical : $P_{1}, P_{4}$ since $P_{1} / 3 = P_{4}$

47:
$$l = \begin{bmatrix}
1 \\
3 \\
4 \\
\end{bmatrix} + t \begin{bmatrix}
1 \\
-2 \\
-3
\end{bmatrix}$$
Distance = $(P_{1} - P_{0}) \sin \theta$

Distance = $|\vec{P_{1}P_{0}}| \cdot \frac{{|\vec{P_{1}P_{0}}\times l_{t}|}}{| P_{1}P_{0}| |l_{t}|}$ = $\frac{\sqrt{ 6^2 + 3^2 + 4^2 }}{\sqrt{ 14 }} = \sqrt{ \frac{61}{14} }$

## Section 10.6

3:
Describe:
$x^2 + z^2 = 1$ : A cyliner in the y direction with redius 1

9:
a) : $x^2 + y^2 - z^2 = 1$ :

Trace $xy$ : $z = k$ : $x^2 + y^2 = 1+k^2$ since $k^2$ is always greater than zero, the trance is an eclipse.eHowever, the trace on $x=k$ and $z=k$ would end up in $y^2-z^2 = 1-k^2, y^2 = z^2 - k^2 +1$, which is hyperbolic funtions. 

b) :  The graph would be rotated 90 degrees and allocates on the y axis. Shape unchanged. 

c):  The equation is equivalent to $x^2 + (y+1)^2 -z^2 = 1$, which moved the original graph 1 unit left in the y axis

13: 

$x^2 = y^2 + 4z^2$
$x^2 - y^2 - 4z^2 = 0$

Trace $xy$ : $x^2-y^2 = 4k^2$  Which is an hyperbola
Trace $xz$ : $x^2 - 4z^2 = k^2$ Which is an hyperbola
Trace $yz$ : $y^2 + 4z^2 = k^2$  Which is an Eclipse

The graph is Cone on the $x$ axis

15:
$-x^2 +4y^2-z^2 = 4$

Trace $xy$ : $4y^2 - x^2 = 4+k^2$ : Hyperbola
Trace $xz$ : $x^2 + z^2 = 4k^2 - 4$ : Eclipse but not between $y=[1,-1]$
Trace $yz$ : $4y^2-z^2 = 4 + k^2$ : Hyperbola

The graphs is two hyperboloids disjointed between $y = 1$ and $y=-1$, face outwards. 

27:

$x^2 - 4x +4 -y^2-2y-1+z^2-2z+1$
$= (x-2)^2 - (y+1)^2 + (z-1)^2$

To describe the graph, it is a pair of cone on the $y$ axis with the center location of $(2,-1,1)$

29:

The surface can be shown as
```
                 Z axis
                 |
                 |
          ###############
       ######    |    ######    Outer: z = sqrt(x^2 + y^2)
      ###        |        ####  Trace: xy : z=2
       ######         ######
      \    #############    /
       \   |           |   /
        \  |           |  /
         \ |           | /
           -_         _-       Inner : r=1 : (x^2 + y^2 = 1)
             ^^-----^^
                 |
                 |
            x         y
        x                   y
    x                              y
```

## Section 10.7

9:
The original equation is:

$r(t) = \begin{bmatrix} 1 \\ \cos t \\ 2\sin t\end{bmatrix}$

The first elemnt is 1 means, the function output remains on plane $x=1$
 $y = cos t$ indicates the output travels between $[-1, 1]$
 $x = 2 \sin t$ indicates the output travels between $[-2,2]$

The graph is a eclipse on plane $x=1$ with the vectors traveling counter clockwise

41:
$$\dfrac{dr}{dt} = \dfrac{d}{dt}\begin{bmatrix} e^{t^2} \\-1 \\ \ln(1+3t)\end{bmatrix} = \begin{bmatrix}
e^{t^2} 2t \\
0 \\
\frac{3}{1+3t} 
\end{bmatrix}$$
55:

$$r(t) = \begin{bmatrix}
t \cos t \\
t \\
t \sin t
\end{bmatrix}\quad \frac{dr}{dt} = \begin{bmatrix}
\cos t -t \sin t \\
1 \\
\sin t +t\cos t
\end{bmatrix}$$
Given point $-\pi,\pi,0$, the line is:
$$l = \begin{bmatrix}
-\pi \\
\pi \\
0
\end{bmatrix} + t \begin{bmatrix}
-1 \\
1 \\
-\pi
\end{bmatrix}$$
- Solved directly from the equations.

57:

$$\frac{dr_{1}}{dt} = \begin{bmatrix}
1 \\
2t \\
3t^2
\end{bmatrix} \quad \frac{dr_{2}}{dt} = \begin{bmatrix}
\cos t \\
2\cos 2t \\
1
\end{bmatrix}$$
And since the intersection happends at the origin, we have $t=0$
The equation is now:
$$v_{1} =\begin{bmatrix}
1 \\
0 \\
0
\end{bmatrix}\quad v_{2} = \begin{bmatrix}
1 \\
2 \\
1
\end{bmatrix}$$
And the angle can be found by:
$$\cos^{-1} \frac{v_{1} \cdot v_{2}}{|v_{1}| |v_{2}|} = \cos^{-1} \frac{1}{\sqrt{ 6 }}$$
