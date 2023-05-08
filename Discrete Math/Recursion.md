----
Recursion is anything that is defined in terms of itself. (For example, the Febonacci Sequence  is defined as:)
$$f(n) = f(n-1)+f(n-2), f(0)=0. f(1)=1$$
Every recursive function needs the following to parts:
- 1: A base case or the end of recursion
- 2: A recursive call of the function by itself

Tail recursion is **A special form of recursion where the last operation of a function is a recursive call**. .Tail recursions can be convert to iterations, which happends when we expand the iterations.

From a programming standpoint, the expression can be like this:
```cpp
template<typename T>
T recur(T var){
	//base case
	if(condition) return base(var);

	//recursive structure, where func() is some process for T
	return recur(func(var));
}
```

Other recursions would be considered head recursions.

A **Loop Invariant** is a quantity that  is a property of a loop that is true before (and after) each iteration. It can be proved from the start case, and proved by the following case asume previous case is true. 