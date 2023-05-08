----
Simple but slow sorts:

- Bobble sort            - stable
- Selecion sort  
- Insertion sort.        - stable

Bobble sort swaps the 2 neighboring element that are not in order, keep repeat until the entire array is sorted. (we "booble up" the largest element  to the right of the array)

Bobble sort is $O(n^2)$ algorithm

**A sorting algorithm is stable if all equal elements maintain their relative order.** 

Insetion sort would insert the next element into the already so-far sorted list. It iterates from the first element which has already being sorted by itself. 

Insertion sort is $O(n^2)$ algorithm

Insertion runs faster than bobble sort by a contant because it does not need to check the entire undorted section of the array every time.

**Merge Sort**

MergeSort is a recursive algorithm defined as the algorithm that devides the array into short pieces of 1 elements, and merge the sorted small pieces to be greater sorted arrays.

it is a devide and conquer problem

Merge sort is $O(n\log n)$ algorithm

Solve by tree:

We traverse the the recursive calling of the merge function and will draw a tree until we reach the fundamental elements. By doing this every node represents a call to the merge function with its runtime $\theta(n)$ of merging the the elements plus the other calls to recursive calling of merges on sub sequences.

Since each layer sums to $\Theta(n)$ runtime, and since we have $\log(n)$ layers, the complexity of this algorithm is $\Theta(n \log n)$
This method can be used for other recursive nodes as well.


**Quick Sort**

Quicksort is also a recursive algorithm. by intuition it choose the last element to be the pivot, all the things less than the pivot go to left and all things greater go to the right.

After all swaps and moves two quicksorts are called on both subsequences in left and right to recursively repeat this process until reaching only 1 element.

This is not a stable sorting algorithm.

It looks like this:
```c
void quicksort(int* a, int L, int R){
	if(L < R){
		int pivot = partition(a, L, R);
		quicksort(a, L, pivot-1);
		quicksort(a, pivot+1, R);
	}
} 

//Note: This is only a demo of the pivot choice
int partition(int* a, int L, int R){
	int i = L;
	int p = a[R]
	for(int j = L; j < R; j++){
		if(a[j] <= p){
			swap(a[i],a[j]);
			i++;
		}
	}
	swap(a[R],a[i]);
	return i;
}
```

Quick sort runs on the complexity of $\Theta (n \log n)$. However, this is a condition that only would satisfy if the returned pivot is approximately the median of the array. If we always have the least or largest elemnt, our worst case runtime will be $O(n^2)$

Quick sort have the average runtime extremely distinct from the worst runtime

The quicksort is faster than merge sort in application, it is faster because primarily locality of reference. Since referencing elements closer in memory would yield less RAM delay. 

In choosing pivot, the normal approach is to mean the values of:
$$a[L] + a\left[ \frac{L+R}{2} \right] + a[R]$$
There exists median-of-medians algorithm to find the optimal split, but it is extremely inefficient.



