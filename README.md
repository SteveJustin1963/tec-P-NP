# P vs NP

In theoretical computer science, the concepts of P and NP represent two major classes of computational problems. Understanding these classes is critical to addressing one of the most significant open questions in the field: Is P equal to NP (P=NP), or are they distinct (P≠NP)? This document aims to clarify these concepts, discuss their implications, and outline example problems and solutions.

## Overview of P and NP

### P (Polynomial Time)
P is the class of problems that can be solved in polynomial time using deterministic algorithms. In simpler terms, the time required to solve these problems grows at most polynomially with the size of the input. Examples of problems in P include:

- Sorting an array (e.g., QuickSort, MergeSort).
- Finding the shortest path in a graph (e.g., Dijkstra’s algorithm).
- Testing primality (e.g., AKS primality test).

### NP (Nondeterministic Polynomial Time)
NP consists of problems for which a solution can be verified in polynomial time. While finding a solution may be challenging, verifying its correctness is computationally efficient. Examples of NP problems include:

- The Traveling Salesman Problem.
- The Knapsack Problem.
- Boolean Satisfiability (SAT).

### The Open Question: P vs NP
The question of whether P equals NP or not remains unanswered. If P=NP, every problem in NP could be solved as efficiently as it is verified. If P≠NP, at least one problem in NP cannot be solved in polynomial time.

## Implications of P=NP or P≠NP

1. **Cryptography:**
   - If P=NP, many cryptographic systems (e.g., RSA, AES, DES) relying on the difficulty of NP problems would become vulnerable.
   - However, the practicality of breaking these systems may depend on the polynomial degree, as high-degree polynomials might still be computationally infeasible.

2. **Optimization and Data Analysis:**
   - A proof of P=NP could revolutionize fields requiring optimization, enabling faster and more effective solutions to complex problems.

3. **Scientific Modeling:**
   - Problems such as protein folding or subatomic modeling are inherently exponential in nature. These may not benefit directly from P=NP unless specific shortcuts are found.

4. **Artificial Intelligence:**
   - The development of self-aware AI would likely not depend directly on solving the P vs NP question but could gain from advancements in optimization algorithms.

## Polynomial Time Algorithms

A polynomial time algorithm is one whose execution time can be expressed as a polynomial function of the input size \(n\). Problems solvable in polynomial time are considered “tractable.” Examples include:

- **Linear Search:** \(O(n)\).
- **Bubble Sort:** \(O(n^2)\) (worst case).
- **QuickSort:** \(O(n \log n)\) (average case).
- **Heapsort:** \(O(n \log n)\) (all cases).

While \(O(n \log n)\) is not strictly polynomial, it is considered efficient because it is bounded by a higher polynomial (e.g., \(O(n^2)\)).

## Problem-Solving Steps

1. **Determine Problem Class:** Identify whether the problem belongs to NP.
2. **Algorithm Development:** If the problem is in NP, attempt to develop a polynomial-time algorithm.
3. **Problem Reduction:** For non-NP problems, investigate if they can be reduced to simpler problems within P or NP.

## Example Problems

### Subset Sum Problem
**Description:** Given a set of integers and a target integer, determine if a subset exists whose sum equals the target.

- **Class:** NP.
- **Approach:** A recursive algorithm with memoization can efficiently solve the problem by avoiding redundant calculations.
- **Code:** Example implementation in `np1.c`.

### Knapsack Problem
**Description:** Given a set of items with weights and values, and a knapsack with a weight limit, find the most valuable subset of items that fits.

- **Class:** NP.
- **Approach:** Use a recursive algorithm with memoization to optimize performance.
- **Code:** Example implementation in `np2.c`.

## Practical Considerations

### Steps for Investigating P and NP Problems
- **Understand Concepts:** Grasp the definitions and examples of P and NP.
- **Identify Problems:** Select specific problems and classify them.
- **Algorithm Testing:** Test proposed algorithms for correctness and efficiency.
- **Implication Analysis:** Explore the impact of P=NP or P≠NP proofs on fields like cryptography, AI, and optimization.


# The Knapsack problem in MINT
we only deal with integers (whole numbers for weights and values), it can be implemented in MINT without needing the AP9511 floating-point unit. Here's why:

1. All operations are integer-based:
- Addition/subtraction of weights and values
- Comparison operations (greater than, less than)
- No division or floating point math needed



```mint
// Function A: Initialize arrays
:A
    [ 0 0 0 0 0 ] w!  // weights array
    [ 0 0 0 0 0 ] v!  // values array
    [ 0 0 0 0 0 ] r!  // results array
;

// Function B: Input handling
:B
    `Enter number of items (max 5): ` /K 48 - n!
    `Enter knapsack capacity: ` /K 48 - c!
    n (
        `Item ` /i 1 + . ` weight: ` /K 48 - w /i ?!
        `Item ` /i 1 + . ` value: ` /K 48 - v /i ?!
        /N
    )
;

// Function C: Calculate best value for current capacity
:C
    0 m!  // max value found
    n (   // for each item
        /i w ? c < (  // if item fits
            /i v ? m > (  // if value is better
                /i v ? m!  // update max
                /i r c ?!  // store item index
            )
        )
    )
;

// Function D: Print result
:D
    `Maximum value possible: ` m . /N
    `Items chosen: ` 
    n (
        r /i ? 0 > (
            /i 1 + .
            ` `
        )
    )
    /N
;

// Function M: Main program
:M
    A    // Initialize arrays
    B    // Get input
    C    // Calculate solution
    D    // Show results
;

```

Key adaptations for MINT:

1. Memory Constraints:
- Limited to 5 items maximum (vs 100 in C)
- Using fixed size arrays
- Simplified algorithm to work within MINT's memory limits

2. Data Structure Changes:
- w: weights array
- v: values array
- r: results array to track chosen items
- m: current maximum value
- n: number of items
- c: capacity

3. Limitations vs Original:
- No dynamic programming table (due to memory constraints)
- Smaller problem size
- Simpler greedy approach instead of optimal solution
- May not find the absolute optimal solution for all cases

To use:
1. Enter the code into MINT
2. Call M to run: `M`
3. Follow the prompts to enter:
   - Number of items (max 5)
   - Knapsack capacity
   - Weight and value for each item

The program will output:
- Maximum value achieved
- Which items were chosen

While this implementation is simpler than the C version due to MINT's constraints, it still works well for small problems and demonstrates the core concept.




## References

1. [Wikipedia: Time Complexity](https://en.wikipedia.org/wiki/Time_complexity)
2. [Stanford Lecture Notes on P vs NP](http://theory.stanford.edu/~trevisan/cs254/notes/lecture02.pdf)
3. [University of Pennsylvania Notes on P and NP](https://www.seas.upenn.edu/~cit596/notes/dave/p-and-np0.html)

