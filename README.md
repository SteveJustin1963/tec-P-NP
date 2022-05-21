# tec-P-NP
to pee or not to pee is the question


### Solution

1. Determine if the problem is in NP.
2. If the problem is in NP, then use polynomial time algorithms to solve the problem.
- Algorithms for parallel computing: MapReduce, embarrassingly parallel algorithms
- Backtracking
- Bioinformatics algorithms: BLAST, Smith-Waterman algorithm
- Branch and bound
- Brute force search
- Combinatorial algorithms: backtracking, brute force
- Computer vision algorithms: RANSAC, HOG feature detection
- Cryptographic algorithms: RSA algorithm, Diffie-Hellman key exchange
- Data compression algorithms: Huffman coding, LZW compression
- Data mining algorithms: Apriori algorithm, FP-growth algorithm
- Data structures: B-trees, heaps, hash tables
- Graph algorithms: breadth-first search, depth-first search, topological sort
- Heuristics
- Image processing algorithms: Canny edge detection, Hough transform
- Local search
- Machine learning algorithms: Support vector machines, decision trees
- Mathematical algorithms: Euclidean algorithm, Fermat's little theorem
- Natural language processing algorithms: Hidden Markov models, part-of-speech tagging
- Numerical algorithms: Newton's method, bisection method
- Optimization algorithms: Simulated annealing, genetic algorithms
- Pattern matching algorithms: Boyer-Moore algorithm, KMP algorithm
- Search algorithms: binary search, linear search
- Sorting algorithms: quicksort, heapsort, mergesort
- String algorithms: Rabin-Karp algorithm, Knuth-Morris-Pratt algorithm
- Web algorithms: PageRank, Google crawling
4. If the problem is not in NP, then it is probably not a P-problem.

### polynomial time algorithms
A polynomial-time algorithm is an algorithm whose execution time is either given by a polynomial on the size of the input, or can be bounded by such a polynomial. Problems that can be solved by a polynomial-time algorithm are called tractable problems.

### https://www.seas.upenn.edu/~cit596/notes/dave/p-and-np0.html
A polynomial-time algorithm is an algorithm whose execution time is either given by a polynomial on the size of the input, or can be bounded by such a polynomial. Problems that can be solved by a polynomial-time algorithm are called tractable problems. For example, most algorithms on arrays can use the array size, n, as the input size. To find the largest element in an array requires a single pass through the array, so the algorithm for doing this is O(n), or linear time. Sorting algorithms usually require either O(n log n) or O(n2) time. Bubble sort takes linear time in the best case, but O(n2) time in the average and worst cases. Heapsort takes O(n log n) time in all cases. Quicksort takes O(n log n) time on average, but O(n2) time in the worst case. Regarding O(n log n) time, note that; the base of the logarithms is irrelevant, since the difference is a constant factor, which we ignore; and although n log n is not, strictly speaking, a polynomial, the size of n log n is bounded by n2, which is a polynomial. Probably all the programming tasks you are familiar with have polynomial-time solutions. This is not because all practical problems have polynomial-time solutions. Rather, it is because your courses and your day-to-day work have avoided problems for which there is no known practical solution.
