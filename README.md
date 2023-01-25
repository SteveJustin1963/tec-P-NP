# tec-P-NP

P and NP are classes of computational problems in theoretical computer science.

P, also known as "polynomial time," is a class of problems that can be solved in polynomial time using a deterministic algorithm. This means that the time it takes for the algorithm to solve the problem grows at most polynomially with the size of the input. Examples of P problems include sorting an array, finding the shortest path in a graph, and primality testing.

NP, which stands for "nondeterministic polynomial time," is a class of problems for which a proposed solution can be verified in polynomial time. This means that given a proposed solution, it can be verified whether it is correct or not in polynomial time. Examples of NP problems include the travelling salesman problem, the knapsack problem and the satisfiability problem.

It is not known whether P=NP, meaning that all problems in NP can be solved in polynomial time or P≠NP, meaning that there exists at least one problem in NP that cannot be solved in polynomial time.

What would happen if someone proves P=NP or P!=NP?
- every NP problem would contain a hidden shortcut, allowing computers to quickly find perfect solutions to them.
- would include renewed interest in finding a reduction algorithm. 
- try to find some lower bounds on the constants associated with the reduction algorithm.
- it would break all forms of cryptographic security such as AES, DES etc and would be able to spy on virtually any government.
- be able to speed up complex scientific modelling by a large factor which would result if hazardous mutations of science if not controlled and regulated. Protein synthesis among other things works on an exponential algorithm, and so do sub atomic modelling.
- a step closer to developing self aware AI, which could be used for lots of complex cyber crimes over the internet.
 

## polynomial time algorithms

is an algorithm whose execution time is either given by a polynomial on the size of the input, or can be bounded by such a polynomial. Problems that can be solved by a polynomial-time algorithm are called tractable problems. For example, most algorithms on arrays can use the array size, n, as the input size. To find the largest element in an array requires a single pass through the array, so the algorithm for doing this is O(n), or linear time. Sorting algorithms usually require either O(n log n) or O(n2) time. Bubble sort takes linear time in the best case, but O(n2) time in the average and worst cases. Heapsort takes O(n log n) time in all cases. Quicksort takes O(n log n) time on average, but O(n2) time in the worst case. Regarding O(n log n) time, note that; the base of the logarithms is irrelevant, since the difference is a constant factor, which we ignore; and although n log n is not, strictly speaking, a polynomial, the size of n log n is bounded by n2, which is a polynomial. Probably all the programming tasks you are familiar with have polynomial-time solutions. This is not because all practical problems have polynomial-time solutions. Rather, it is because your courses and your day-to-day work have avoided problems for which there is no known practical solution .https://www.seas.upenn.edu/~cit596/notes/dave/p-and-np0.html

In other words...A polynomial time algorithm is an algorithm whose running time is a polynomial function of the size of the input, typically denoted by 'n'. The complexity class of problems that can be solved in polynomial time is called P. These problems include common tasks such as sorting and searching, which can be solved using algorithms such as bubble sort, heapsort, and quicksort. These algorithms have different time complexities, with some being more efficient than others. For example, bubble sort has a time complexity of O(n^2) in the worst case, while quicksort has an average time complexity of O(n log n). It's important to note that while O(n log n) is not strictly speaking a polynomial, it is still considered to be a tractable problem because it is bounded by O(n^2).
It is important to mention that not all problems can be solved in polynomial time, some problems are intractable. The study of tractable and intractable problems is known as the P vs NP problem, which is one of the most important open problems in theoretical computer science.


## Solution steps
1. Determine if the problem is in NP.
2. If the problem is in NP, then use polynomial time algorithms to solve the problem.
3. If the problem is not in NP, then it is probably not a P-problem.


## plan
- Understand the concept of P and NP: P is a class of problems that can be solved in polynomial time, while NP is a class of problems that can be verified in polynomial time.
- Identify a specific problem that you would like to investigate and determine if it is in the class NP.
- Develop a polynomial-time algorithm to solve the problem, if it is in NP.
- Test and analyze the algorithm to ensure that it is both correct and efficient.
- If the problem is not in NP, try to prove that it is not a P-problem by using techniques such as reducing the problem to another problem that is known to be in NP or not in P.
- If the problem is in NP and you have a polynomial time algorithm, try to prove P=NP by showing that any problem in NP can be solved in polynomial time.
- If P=NP, consider the implications of the proof and the potential impact on fields such as cryptography and artificial intelligence.
- If P!=NP, consider the implications of the proof and the potential impact on fields such as computer science and mathematics.
- Continuously research and update your understanding of the P vs NP problem as new developments arise.

## np prob 1
The subset sum problem: Given a set of integers and a target integer, determine whether there exists a subset of the given set that sums to the target integer. This problem is NP because, given a proposed subset, it is easy to check if the subset sums to the target integer in polynomial time, but it's not known if there's a polynomial time algorithm to find the subset.

## `np1.c`
This program uses a recursive approach with memoization to find the solution. The subsetSum function is a recursive function that takes the current index i of the set and the current sum sum as input, and returns whether there exists a subset of the set from index i to the end that sums to target. The function uses a 2D array dp to store the results of previously computed subproblems, which helps to avoid redundant computation and thus improve the performance.
The main function reads the set of integers, the target integer, and initializes the dp array before calling the subsetSum function. If the function returns 1, then the program prints that there exists a subset that sums to the target, otherwise it prints that there does not exist a subset that sums to the target.

Please note that the program has some limitations, such as the size of the set and the target number, it is only an example and it can be modified to suit your specific needs.

## np prob 2
The knapsack problem: Given a set of items, each with a weight and a value, and a knapsack with a certain weight capacity, determine the most valuable subset of items that can be fit into the knapsack. This problem is NP because, given a proposed subset, it is easy to check if it is a valid solution (all items fit in the knapsack) in polynomial time, but it's not known if there's a polynomial time algorithm to find the most valuable subset.

## `np2.c`
This program uses a recursive approach with memoization to find the solution. The subsetSum function is a recursive function that takes the current index i of the set and the current sum sum as input, and returns whether there exists a subset of the set from index i to the end that sums to target. The function uses a 2D array dp to store the results of previously computed subproblems, which helps to avoid redundant computation and thus improve the performance.
The main function reads the set of integers, the target integer, and initializes the dp array before calling the subsetSum function. If the function returns 1, then the program prints that there exists a subset that sums to the target, otherwise it prints that there does not exist a subset that sums to the target.



## Ref
- https://en.wikipedia.org/wiki/Time_complexity
- 
