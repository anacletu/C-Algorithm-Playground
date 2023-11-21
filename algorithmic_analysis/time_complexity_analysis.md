# Time Complexity Analysis

In this document, we analyze the time complexity of various algorithms implemented in this repository. Time complexity is a crucial aspect of algorithmic analysis, providing insights into how the runtime of an algorithm grows with the input size.

## Table of Contents

1. [Bubble Sort](#bubble-sort)
2. [Insertion Sort](#insertion-sort)
3. [Selection Sort](#selection-sort)
4. [Merge Sort](#merge-sort)
5. [Quick Sort](#quick-sort)
6. [Linear Search](#linear-search)
7. [Binary Search](#binary-search)
8. [Interpolation Search](#interpolation-search)
9. [Singly Linked List](#singly-linked-list)
10. [Doubly Linked List](#doubly-linked-list)
11. [Circular Linked List](#circular-linked-list)
12. [Binary Tree](#binary-tree)
13. [AVL Tree](#avl-tree)
14. [Post-order Traversal](#post-order-traversal)
15. [Queue using Linked List](#queue-using-linked-list)
16. [Queue using Array](#queue-using-array)
17. [Priority Queue](#priority-queue)
18. [Stack using Linked List](#stack-using-linked-list)
19. [Stack using Array](#stack-using-array)
20. [Enhanced Stack](#enhanced-stack)
21. [Recursive Pathfinder](#recursive-pathfinder)
22. [Dijkstra's Pathfinder](#dijkstras-pathfinder)
23. [Longest Increasing Subsequence](#longest-increasing-subsequence)
24. [Sliding Window Pattern](#sliding-window-pattern)

## Bubble Sort

### Time Complexity: O(n^2)

The Bubble Sort algorithm has a quadratic time complexity. In the worst-case scenario, where the array is sorted in reverse order, it requires n passes to sort an array of n elements.

## Insertion Sort

### Time Complexity: O(n^2)

Insertion Sort also has a quadratic time complexity. In the worst-case scenario, where the array is sorted in reverse order, it requires n^2 / 2 comparisons and n^2 / 2 swaps to sort an array of n elements.

## Selection Sort

### Time Complexity: O(n^2)

Selection Sort has a quadratic time complexity. In the worst-case scenario, where the array is sorted in reverse order, it requires n passes to sort an array of n elements.

## Merge Sort

### Time Complexity: O(n log n)

Merge Sort has a time complexity of O(n log n). It divides the array into halves recursively until each subarray has a single element, then merges them in a sorted manner.

## Quick Sort

### Time Complexity: O(n^2) in worst case, O(n log n) on average

Quick Sort has a time complexity of O(n^2) in the worst case, but it typically performs at O(n log n) on average. The algorithm selects a pivot, partitions the array, and recursively sorts the subarrays.

## Linear Search

### Time Complexity: O(n)

Linear Search has a time complexity of O(n) in the worst case. It iterates through the array sequentially until it finds the target element or reaches the end.

## Binary Search

### Time Complexity: O(log n)

Binary Search has a time complexity of O(log n). It repeatedly divides the sorted array in half until the target element is found or the search space is empty.

## Interpolation Search

### Time Complexity: O(log log n) on average

Interpolation Search has an average time complexity of O(log log n) when the elements are uniformly distributed. It uses interpolation formula to estimate the position of the target element.

## Singly Linked List

### Time Complexity: O(n) for traversal and search, O(1) for insertion and deletion at the beginning

In a Singly Linked List, traversing the list or searching for an element has a time complexity of O(n). Insertion and deletion at the beginning of the list can be done in constant time O(1).

## Doubly Linked List

### Time Complexity: O(n) for traversal and search, O(1) for insertion and deletion at the beginning or end

Doubly Linked List has similar time complexities to Singly Linked List, with O(n) for traversal and search. However, it allows O(1) time complexity for insertion and deletion at both the beginning and end of the list.

## Circular Linked List

### Time Complexity: O(n) for traversal and search, O(1) for insertion and deletion at the beginning

Circular Linked List has similar time complexities to Singly Linked List. Traversal and search are O(n), while insertion and deletion at the beginning are O(1).

## Binary Tree

### Time Complexity: O(n) for traversal and search in the worst case

In a Binary Tree, traversal and search have a time complexity of O(n) in the worst case, where every node needs to be visited.

## AVL Tree

### Time Complexity: O(log n) for search, insertion, and deletion in the worst case

AVL Tree is a self-balancing Binary Search Tree. In the worst case, search, insertion, and deletion operations have a time complexity of O(log n).

## Post-order Traversal

### Time Complexity: O(n)

Post-order Traversal of a Binary Tree has a time complexity of O(n), where n is the number of nodes in the tree.

## Queue using Linked List

### Time Complexity: O(1) for enqueue and dequeue operations

In a Queue implemented using a Linked List, enqueue and dequeue operations have a time complexity of O(1).

## Queue using Array

### Time Complexity: O(1) for enqueue and dequeue operations

In a Queue implemented using an array, enqueue and dequeue operations also have a time complexity of O(1).

## Priority Queue

### Time Complexity: O(log n) for insertion and extraction of the minimum (or maximum) element

In a Priority Queue, insertion and extraction of the minimum (or maximum) element have a time complexity of O(log n).

## Stack using Linked List

### Time Complexity: O(1) for push and pop operations

In a Stack implemented using a Linked List, push and pop operations have a time complexity of O(1).

## Stack using Array

### Time Complexity: O(1) for push and pop operations

In a Stack implemented using an array, push and pop operations also have a time complexity of O(1).

## Enhanced Stack

### Time Complexity: O(1) for push, pop, and getMinimum operations

An Enhanced Stack, supporting the getMinimum operation, has a time complexity of O(1) for all operations.

## Recursive Pathfinder

### Time Complexity: Exponential, O(2^n)

The Recursive Pathfinder algorithm may have an exponential time complexity, especially for larger grids. Each cell can be visited or not, resulting in 2^n possible paths.

## Dijkstra's Pathfinder

### Time Complexity: O((V + E) log V), where V is the number of vertices and E is the number of edges

Dijkstra's Pathfinder has a time complexity of O((V + E) log V) using a priority queue to efficiently select the vertex with the minimum distance.

## Longest Increasing Subsequence

### Time Complexity: O(n^2) for dynamic programming approach, O(n log n) for optimized approach

Finding the Longest Increasing Subsequence has a time complexity of O(n^2) using dynamic programming and O(n log n) using an optimized approach based on binary search.

## Sliding Window Pattern

### Time Complexity: O(n)

The Sliding Window pattern often results in a linear time complexity. It efficiently processes arrays or lists by maintaining a set of elements as a "window" that can be shifted or expanded.